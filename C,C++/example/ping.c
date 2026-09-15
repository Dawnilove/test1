//[연습문제 핑 갯수]?????
// 핑 몇회?
// 가장 많이 보낸 주소 top3
// 가장 핑이 많은 시간대
#include <stdio.h>
#include <string.h>

typedef struct
{ // ip와 횟수로 이루어진 구조체 선언
    char ip[128];
    int count;
} IP;

// qsort에서 사용할 비교 함수
//  int compare_ip(const void *a, const void *b) {
//      IP *ip1 = (IP *)a;
//      IP *ip2 = (IP *)b;
//      return ip2->count - ip1->count;

int main()
{
    IP iplist[128];           // 구조체 선언
    int total_ping = 0;       // 전체 핑 수 변수 선언
    int time_count[24] = {0}; // 24시간에 해당하는 배열 선언
    int ip_count = 0;         //
    char line[256];

    FILE *fp = fopen("ping.txt", "r");

    if (fp == NULL)
    {
        printf("파일을 찾을 수 없습니다.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), fp))
    {
        total_ping++; // 전체 핑수 카운트

        char *hyphen = strchr(line, '-');                        //'-'의 주소 찾기
        int hour = ((hyphen[1] - '0') * 10 + (hyphen[2] - '0')); //'-'에서 한칸 옆이 시간의 십의 자리, 두칸 옆이 일의 자리
        // - '0': 문자 숫자를 정수 숫자로 변경
        if (hour < 24 && hour >= 0)
        {
            time_count[hour]++; // 시간이 0~23시일때 각 시간의 횟수 세기
        }

        // 출발지 찾기
        char *end = strstr(line, "->");
        // 출발지 찾기
        if (end != NULL)
        {
            int len = end - line;
            char temp[256];
            strncpy(temp, line, len);
            temp[len] = '\0';

            while (len > 0 && (temp[len - 1] == ' ' || temp[len - 1] == '\t'))
            {
                temp[--len] = '\0';
            }
            char *src = strrchr(temp, ' ');
            if (src != NULL)
            {
                src++;

                int found = 0;
                for (int i = 0; i < ip_count; i++)
                {
                    if (strcmp(iplist[i].ip, src) == 0)
                    {
                        iplist[i].count++;
                        found = 1;
                        break;
                    }
                }

                if (!found && ip_count < 128)
                {
                    strcpy(iplist[ip_count].ip, src);
                    iplist[ip_count].count = 1;
                    ip_count++;
                }
            }
        }
    }
    fclose(fp);

    // 주소값 정렬 구문

    // sort(iplist, ip_count, sizeof(IP), compare_ip) //빠른 정렬
    for (int i = 0; i < ip_count - 1; i++) // 각 주소의 횟수를 비교 후 순서 정렬
    {
        for (int j = i + 1; j < ip_count; j++) // 각 ip에 따른 갯수 비교 후 iplist에서 순서 변경
        {
            if (iplist[j].count > iplist[i].count)
            {
                IP temp = iplist[i];
                iplist[i] = iplist[j];
                iplist[j] = temp;
            }
        }
    }

    // 핑이 많은 시간 구하기
    int max_hour = 0;                   // 초기 시간 0시로 설정
    int max_hour_count = time_count[0]; // 초기값 설정
    for (int i = 1; i < 24; i++)
    {
        if (time_count[i] > max_hour_count) // 기준 시간을 맥스 카운트로 잡고 그보다 클 경우 기준 시간을 그 시간으로 변경
        {
            max_hour_count = time_count[i];
            max_hour = i;
        }
    }

    // 결과 출력
    printf("       [결과]     \n");
    printf("전체 핑 횟수: %d회\n\n", total_ping);

    printf("가장 많이 보낸 주소 TOP 3 \n");
    for (int i = 0; i < 3 && i < ip_count; i++)
    {
        printf("%d위: %s (보낸 횟수: %d회)\n", i + 1, iplist[i].ip, iplist[i].count);
    }
    printf("\n");

    printf("핑이 많은 시간대 \n");
    printf("%02d시 (총 %d회)\n", max_hour, max_hour_count);

    return 0;
}