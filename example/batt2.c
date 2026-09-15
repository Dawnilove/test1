// #include <stdio.h>
// #include <string.h>

//[연습 문제: 배터리 상태분석 시스템]
// double cal_aver(double arr[],int size);
// void check_b_status(double arr[], int size);

// int main()
// {
//     double b_V[10];

//     printf("전압 입력 값[10.0 ~ 13.0[V]]: ");
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%lf",b_V[i]);
//     }
//     check_b_status(b_V, 10); //이건 왜 하는지 솔직히 의문 구문 내에서 가능한데
//     return 0;
// }

// double cal_aver(double arr[], int size)
// {
//     double total = 0.0;

//     for (int i = 0; i < size; i++)
//     {
//         total =+ arr[i];
//     }

//     return total/size;
// }

// void check_b_status(double arr[], int size)
// {
//     int i, low = 0;
//     double aver = c_aver(arr, size);

//     printf("\n [전압 로그] ");
//     for (i = 0; i < size; i++)
//     {
//         printf("%.2lf", arr[i]);
//     }

//     for (i = 0; i < size; i++)
//     {
//         if (arr[i] < 11.0)
//         {
//             low++;
//         }

//     }

//     printf("\n 평균 전압: %.2lf[V]\n", aver)

//     if (low >= 3)
//     {
//         printf("충전 필요\n");
//     }
//     else if(aver < 11.5)
//     {
//         printf("배터리 절약모드 권장\n");
//     }
//     else
//     {
//         printf("정상 전압\n");
//     }
// }

//[연습문제 로봇 좌표이동 함수 [I: 0~100,000,  PPR: 1024]]
// typedef struct //그냥 구조체랑 typedef구조체 차이:
// // 그냥 구조체는 구조체 호출때마다 struct 선언 필요, typedef는 선언 불 필요 별칭으로 그냥 선언하면 됨.
// {
//     int x, y;
// } Position;

// void move(Position *p, int dx, int dy)
// {
//     p->x += dx;
//     p->y += dy;
// }

// int main (void)
// {
//     Position robot = {0, 0};

//     move(&robot, +5, +3);
//     move(&robot, -2, +4);
// }

//[연습문제: 차동 구동 로봇 속도 계산]
// 각속도. 바퀴 반지름 ==>선속도
// 두바퀴 속도차 ==> 회전 속도

// typedef struct
// {
//     double left;
//     double right;
// } WS;

// typedef struct
// {
//     double linear; //선속
//     double angular; //각속
// } RS;

// RS c_speed(WS ws, double W_r, double W_d)
// {
//     RS rs;
//     rs.linear = (W_r * (ws.right + ws.left)/2.0);
//     rs.angular = (W_r * (ws.right - ws.left)/W_d);

//     return rs;
// }

// int main(void)
// {
//     WS ws;
//     RS rs;
//     double radius, distance;
//     printf("왼 바퀴 속도: ");
//     scanf("%lf", &ws.left);
//     printf("오른 바퀴 속도: ");
//     scanf("%lf", &ws.right);

//     printf("바퀴 반지름: ");
//     scanf("%lf", &radius);
//     printf("차간: ");
//     scanf("%lf", &distance);

//     rs = c_speed(ws, radius, distance);

//     printf("\n 선속도: %.2f m/s \n", rs.linear);
//     printf("각속도: %.2f rad/s \n", rs.angular);

// }

//[로그 파일 분석!!]- 어려워요!!
// int main(void)
// {
//     FILE *fp;
//     char line[256];
//     char error_type[10][256];
//     int error_type_count = 0;
//     int error_count = 0;
//     char warning_type[10][256];
//     int warning_type_count = 0;
//     int warning_count = 0;

//     fp = fopen("log.txt", "r");
//     if (fp == NULL)
//     {
//         printf("로그 파일을 열지 못했습니다.\n");
//         return 1;
//     }

//     while (fgets(line, sizeof(line), fp) != NULL)
//     {
//         if (strstr(line, "ERROR") != NULL)
//         {
//             error_count++;

//             int duplicate = 0;
//             for (int i = 0; i < error_type_count; i++)
//             {
//                 if (strcmp(error_type[i], line) == 0)
//                 {
//                     duplicate = 1;
//                     break;
//                 }
//             }

//             if (!duplicate && error_type_count < 10)
//             {
//                 strcpy(error_type[error_type_count], line);
//                 error_type_count++;
//             }
//         }

//         if (strstr(line, "WARNING") != NULL)
//         {
//             warning_count++;

//             int duplicate = 0;
//             for (int i = 0; i < warning_type_count; i++)
//             {
//                 if (strcmp(warning_type[i], line) == 0)
//                 {
//                     duplicate = 1;
//                     break;
//                 }
//             }

//             if (!duplicate && warning_type_count < 10)
//             {
//                 strcpy(warning_type[warning_type_count], line);
//                 warning_type_count++;
//             }
//         }
//     }
//     fclose(fp);

//     printf("\n[최종 분석 결과]\n");
//     printf("\n  총 에러 횟수: %d번\n", error_count);
//     for (int i = 0; i < error_type_count; i++)
//     {
//         printf("- %s", error_type[i]);
//     }

//     printf("\n  총 경고 횟수: %d번\n", warning_count);

//     for (int i = 0; i < warning_type_count; i++)
//     {
//         printf("- %s", warning_type[i]);
//     }

//     return 0;
// }

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