//[연습문제 브라우저 로그 분석]
// 방문 횟수 몇회?
// 가장 많이 방문한 도메인 top3
// 가장 방문이 많은 시간대
#include <stdio.h>
#include <string.h>

typedef struct
{ //  구조체 선언[도메인, 방문 횟수]
    char domain[256];
    int count;
} Domain;

int main()
{
    Domain domain_list[128];   
    int total_visit = 0;       
    int time_count[24] = {0}; 
    int domain_count = 0;     
    char line[2048];         

    FILE *fp = fopen("brower_log", "r");

    if (fp == NULL)
    {
        printf("파일을 찾을 수 없습니다.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), fp))
    {
        total_visit++;

        // 시간 추출 (첫 번째 콜론 ':' 기준)
        char *colon = strchr(line, ':');
        if (colon != NULL && colon - line >= 2)
        {
            int hour = (colon[-2] - '0') * 10 + (colon[-1] - '0');
            if (hour < 24 && hour >= 0)
            {
                time_count[hour]++;  //각 시간의 횟수 세기
            }
        }

        
        char *bar = strchr(line, '|');
        if (bar != NULL)
        {
            char *url = bar + 1;
        
            while (*url == ' ' || *url == '\t')
            {
                url++;
            }

            // http:// 또는 https:// 건너뛰기
            if (strncmp(url, "https://", 8) == 0)
            {
                url += 8;
            }
            else if (strncmp(url, "http://", 7) == 0)
            {
                url += 7;
            }

            // 도메인 부분 복사 (/, ?, :, 공백, 뉴라인 직전까지)
            char domain_name[256] = {0};
            int len = 0;
            while (url[len] != '\0' && url[len] != '/' && url[len] != '?' && url[len] != ':' && 
                   url[len] != ' ' && url[len] != '\t' && url[len] != '\r' && url[len] != '\n')
            {
                domain_name[len] = url[len];
                len++;
                if (len >= 255)
                    break;
            }
            domain_name[len] = '\0';

            // 유효한 도메인이면 리스트에 추가 또는 카운트 증가
            if (len > 0)
            {
                int found = 0;
                for (int i = 0; i < domain_count; i++)
                {
                    if (strcmp(domain_list[i].domain, domain_name) == 0)
                    {
                        domain_list[i].count++;
                        found = 1;
                        break;
                    }
                }

                if (!found && domain_count < 128)
                {
                    strcpy(domain_list[domain_count].domain, domain_name);
                    domain_list[domain_count].count = 1;
                    domain_count++;
                }
            }
        }
    }
    fclose(fp);

    // 도메인 방문 횟수 정렬 (내림차순 정렬)
    for (int i = 0; i < domain_count - 1; i++)
    {
        for (int j = i + 1; j < domain_count; j++)
        {
            if (domain_list[j].count > domain_list[i].count)
            {
                Domain temp = domain_list[i];
                domain_list[i] = domain_list[j];
                domain_list[j] = temp;
            }
        }
    }

    // 가장 방문이 많은 시간 구하기
    int max_hour = 0;
    int max_hour_count = time_count[0];
    for (int i = 1; i < 24; i++)
    {
        if (time_count[i] > max_hour_count)
        {
            max_hour_count = time_count[i];
            max_hour = i;
        }
    }

    // 결과 출력
    printf("       [결과]     \n");
    printf("전체 방문 횟수: %d회\n\n", total_visit);

    printf("가장 많이 방문한 도메인 TOP 3 \n");
    for (int i = 0; i < 3 && i < domain_count; i++)
    {
        printf("%d위: %s (방문 횟수: %d회)\n", i + 1, domain_list[i].domain, domain_list[i].count);
    }
    printf("\n");

    printf("방문이 많은 시간대 \n");
    printf("%02d시 (총 %d회)\n", max_hour, max_hour_count);

    return 0;
}