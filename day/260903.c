//1-1
#include <stdio.h>

int main(void) 
{
    // int a = 10, b = 5;
    // int res;


    // res = a / b * 2;
    // printf("res = %d\n", res);
    // res = ++a * 3;
    // printf("res = %d\n", res);
    // res = a > b && a != 5;
    // printf("res = %d\n", res);
    // res = a % 3 == 0;
    // printf("res = %d\n", res);


//1-2
    // int a = 20;
    // int b = 0;
    
    // if (a > 10) //조건문 a > 10 = 참이므로 실행문 실행
    // {
    //     b = a;
    // }

    // printf("a = %d, b = %d\n", a, b); //대입이 되며 두 값은 동일

    // return 0;

//1-3
    // int a = 10;

    // if(a>= 0)
    // {
    //     a = 1;
    // }

    // else
    // {
    //     a = -1;
    
    // }

    // printf("a = %d\n", a);

    // return 0;

//1-4
    // int a = 0, b = 0;

    // if (a > 0)
    // {
    //     b = 1;
    // }
    // else if (a == 0)
    // {
    //     b = 2;
    // }
    // else 
    // {
    //     b = 3;
    // }

    // printf("b : %d\n", b);

//1-5
    // int a =10, b = -3;

    // if (a > 10)
    // {
    //     if(b >= 0)
    //     {
    //         b = 1;
    //     }

    //     else
    //     {
    //         b = -1;
    //     }
    // }
    // printf("a = %d\nb = %d\n", a , b);


    // return 0;

//1-6
    // int rank = 2, m = 0;
    // switch (rank)
    // {
    //     case 1:

    //     m =300;
    //     break;

    //     case 2:
    //     m = 200;
    //     break;
    
    //     case 3:
    //     m = 100;
    //     break;

    //     default:
    //     m = 10;
    //     break;
    // }

    // printf("m: %d\n", m);

    // return 0;

        // int N, SF, DM, G;
    // double m, R, T;
    // double c, g, w;
    // int F_min, F_motor;
    // char res;

    // m = 2;
    // N = 200;
    // SF = 2.0;
    // DM = 1.2;
    // R = 20;
    // T = 1.2;
    // G = 5;
    // c = 0.018;
    // g =9.81;
    // w = m * g;


    // F_min = C * W * SF * DM;
    // F_motor = ((T * G) / R) * N;
    
    // if (F_min <= F_motor)
    // {
    //     res= "만족 (적합한 모터입니다.)";
    // }

    // else
    // {
    //     res = "불만족 (더 큰 모터나 감속비가 필요합니다!)";
    // }


    // printf("총 하중(kg): %d\n", m);
    // printf("구동 바퀴 수: %d\n", N);
    // printf("모터 정격 토크(nm): %d\n", T);
    // printf("감속비: %d\n", G);
    // printf("바퀴 반지름(m): %d\n", R);
    // printf("필요한 최소 견인력: %d [N]\n", F_min);
    // printf("모터가 낼 수 있는 견인력: %d [N]\n", F_motor);
    // printf("판정: %d\n", res);
}
