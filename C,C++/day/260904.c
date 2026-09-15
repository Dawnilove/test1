#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
int sum(int x, int y);


//int main()
//{
//1-1
    // double r, w, eta_Lpct, eta_Rpct, L;

    // printf("[입력]\n");
    // printf("r = ");
    // scanf("%lf", &r);
    // printf("w = ");
    // scanf("%lf", &w);
    // printf("eta_L = ");
    // scanf("%lf", &eta_Lpct);
    // printf("eta_R = ");
    // scanf("%lf", &eta_Rpct);
    // printf("L = ");
    // scanf("%lf", &L);

    // double eta_L = eta_Lpct/100;
    // double eta_R = eta_Rpct/100;
    

    // double r_L = r * (1 + eta_L);
    // double r_R = r * (1 + eta_R);
    // double R_c = (w/2) * (r_L + r_R) / (r_L - r_R);
    // double rad = L/R_c;
    // double deg = rad * 180/ M_PI;
    // double d_drift = R_c * (1 - cos(rad));
    
    // printf("[결과]\n")
    // printf("좌/우  바퀴 반경: %.2f/ %.2f \n",r_L, r_R);
    // printf("곡률 반경 R_c: %.2f \n",R_c);
    // printf("편류각: %.2f \n",deg);
    // printf("편류 거리: %.2f \n", d_drift);

    // return 0;


//1-2
    // int a = 1;
    // while (a < 10){
    //     a = a * 2;
    // } 
    // printf("a : %d\n", a);

    // return 0;

    // int a = 1;
    // int i;

    // for (i = 0; i < 30; i++)
    // {
    //     a = a * 2;
    // }
    // printf("a: %d\n ", a);

    // return 0;

//1-3
    // int a= 1;

    // do
    // {
    //     a = a * 2;
    // } while (2 < 10);

    // printf("a: %d\n", a);
    
    // return 0;

//1-4
    // int i, j;

    // for (i =0; i < 3; i++)
    // {
    //  for (j = 0; j < 5; j++)
    //     {
    //         printf("*");
    //     }

    //     printf("\n");
    // }

    //     return 0;

//1-4
    // int i, j;

    // for (i =1; i<= 9; i++)
    // {
    //     for (j =1; j<= 9; j++)
    //     {
    //         printf("%d * %d = %d\n", i, j, i * j);
    //     }
    //     printf("\n");
    // }    

//1-5
    // int i;
    // int sum = 0;

    // for (i =1; i <= 10; i++)
    // {
    //     sum += i;
    //     if (sum > 30)
    //     break;
    // }
    // printf("누적한 값: %d\n", sum);
    // printf("마지막으로 더한 값: %d\n", i);

    // return 0;

//1-6
    // int i, sum = 0;
    // for (i = 0; i <= 100; i++)
    // {  
    //     if((i % 3) == 0)
    //     {
    //         continue;
    //     }
    //     sum += i;
    // }
    // printf("sum: %d\n", sum);

    // return 0;

//1-7
    // int i;
    // int sum = 0;

    // while(i = 1, i <= 10, i++)
    // {
    //     if (sum > 30)
    //     break;

    //     else
    //     sum += i;
    // }
    // printf("sum: %d\n", sum);

    // return 0;

//}

//1-8
// int main(void)
// {
//     int a = 10, b = 20;
//     int result;

//     result = sum(a, b);
//     printf ("result: %d\n", result);

//     return 0;
// }

// int sum(int x, int y)
// {
//     int temp;

//     temp = x+y;

//     return temp;
// }


//1-9
// int get_num(void);

// int main(void)
// {
//     int result;

//     result = get_num();
//     printf("반환값: %d\n", result);
//     return 0;
// }


// int get_num(void);
// {
//     int num;
//     printf("양수 입력: ");
//     scanf("%d", sum);

//     return sum;
// }


//1-11
// void print_char(char ch, int count);


// int main(void)
// {
//     print_char();
    
// }


//1-12

// void print_line(void);

// int main(void)
// {
//     print_line();
//     printf("학번        이름          전공        학점\n");
//     print_line();
//     return 0;
// }

// void print_line(void)
// {
//     int i;

//     for (i = 0; i < 50; i++)
//     {
//         printf("-");
//     }

//     printf("\n");
// }

//1-13
// void fruit(int count);

// int main(void)
// {
//     fruit(1);

//     return 0;
// }

// void fruit(int count)
// {
//     printf("apple\n");
//     if(count ==3) return;
//     fruit(count +1);
//     printf("jam\n");
// }

//1-14
// int main(void)
// {
//     int ary[5];

//     ary[0] =10;
//     ary[1] = 20;
//     ary[2] = ary [0] + ary[1];

//     scanf("%d", &ary[3]);

//     printf("%d\n", ary[2]);
//     printf("%d\n", ary[3]);
//     printf("%d\n", ary[4]);

//     return 0;
// }

//1-15
// int main(void)
// {
//     int score[5];
//     int i;
//     int total = 0;

//     for (i = 0; i < 5; i++)
//     {
//         scanf("%d", &score[i]);
//     }

//     for (i = 0; i < 5; i++)
//     {
//         total += score[i];
    
//     }
    
//     double avg = total/5.0;

//     for (i = 0; i < 5; i++)
//     {
//         printf("%5d", score[i]);
//     }

//     printf("\n");
       
//     return 0;
// }


//1-16
// int main(void)
// {
//     int score[5];
//     int i;
//     int total = 0;
//     double avg;
//     int count;


//     count = sizeof(score) / sizeof(score[0]);

//     for(i = 0; i < count; i++)
//     {
//         scanf("%d",&score[i]);
//     }

//     for(i = 0; i < count; i++)
//     {
//         total += score[i];
//     }

//     avg = total / (double)count;

//     for(i = 0; i < count; i++)
//     {
//         printf("%5d",score[i]);
//     }

//     printf("\n");

//     printf("평균: %.lf\n", avg);

//     return 0;
// }


//1-17[Null포함 출력하게 하기 !!]
// int main(void)
// {
//     char str[80] = "applejam";
//     int i;

//     printf("최초 문자열: %s\n", str);
//     printf("문자열 입력: ");
//     scanf("%s", str);
//     printf("입력 후 문자열: %s\n", str);

//     for (i = 0; i< 80; i++)
//     {
//         printf("%c",str[i]);
//     }
//     return 0;
// }

//1-18
// #include <string.h>

// int main(void)
// {
//     char str1[80] = "cat";
//     char str2[80];

//     strcpy(str1, "tiger");
//     strcpy(str2, str1);

//     printf("%s, %s\n", str1 ,str2);
    
//     return 0;
    
// }

//1-19
// int main(void)
// {
//     char str[80];

//     printf("문자열 입력: ");
//     fgets(str,70,stdin);
//     printf("입력된 문자열: ");
//     puts(str);


//     return 0;
// }


//1-20
int main(void)
{
    srand(time(NULL)); //
    int num = rand();
    printf("%d\n",num);

    int r1 = rand() % 10;
    int r2 = rand() % 100 + 1;
    int r3 = rand() % 21 - 10;
    printf("%d\n",r1);
    printf("%d\n",r2);
    printf("%d\n",r3);
    return 0;
}


