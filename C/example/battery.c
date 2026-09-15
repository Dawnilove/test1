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