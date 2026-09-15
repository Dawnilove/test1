#include <stdio.h>

// int main(void)
// {
//     char *pary[5];
//     int i;

//     pary[0] = "dog";
//     pary[1] = "elephant";
//     pary[2] = "horse";
//     pary[3] = "tiger";
//     pary[4] = "lion";

//     for (i = 0; i < 5; i++)
//     {
//         printf("%s\n", pary[i]);
//     }
    
//     return 0;
// }

// int main(void)
// {
//     int ary1[4] = {1, 2, 3, 4};
//     int ary2[4] = {11, 22, 33, 44};
//     int ary3[4] = {12, 23, 34, 45};
//     int *pary[3] = {ary1, ary2, ary3};
//     int i,j;

//     for ( i = 0; i < 3; i++)
//     {
//         for ( j = 0; j < 4; j++)
//         {
//             printf("%5d", pary[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }




//[완성본 포인터 사용 O]
// int main(void)
// {
//     int ary1[6] = {0}, ary2[6] = {0}, ary3[6] = {0}, ary4[6] = {0}, ary5[6] = {0};
//     int *pary[5] = {ary1, ary2, ary3, ary4, ary5};
//     int i, j, sum = 1;

//     for (i = 0; i < 4; i++)
//     {
//         for (j = 0; j < 5; j++)
//         {
//             pary[i][j] = sum++;
//             pary[i][5] += pary[i][j];
//             pary[4][j] += pary[i][j];
//         }
//         pary[4][5] += pary[i][5];
//     }

//     for (i = 0; i < 5; i++)
//     {
//         for (j = 0; j < 6; j++)
//         {
//             printf("%4d", pary[i][j]);
//         }

//         printf("\n");
//     }

//     return 0;
// }




//[완성본(포인터 사용 X)]
// int main(void)
// {
//     int ary[5][6] = {0};
//     int i, j, sum = 1;

//     for (i = 0; i < 4; i++) //가로 세로 각각의 합 구하는 구문
//     {
//         for (j = 0; j < 5; j++)
//         {
//             ary[i][j] = sum++;
//             ary[i][5] += ary[i][j]; //가로 합
//             ary[4][j] += ary[i][j]; //세로 합
//         }
//     }

//     for (i = 0; i < 4; i++) // 총합 구하는 구문
//         ary[4][5] += ary[i][5]; //[4,5]의 칸에는 가로열의 합을 다 더한 값

//     for (i = 0; i < 5; i++) //출력 구문!!
//     {
//         for (j = 0; j < 6; j++)
//             printf("%4d", ary[i][j]);
//         printf("\n");
//     }
// }

// int main(void)
// {
//     int a = 10;
//     int *pi;
//     int **ppi;

//     pi = &a;
//     ppi = &pi;

//     printf("--------------------------------------------------\n");
//     printf("변수    변숫값       &연산       *연산    **연산   \n");
//     printf("   a%10d %10u\n", a, &a);  
//     printf("  pi%10u %10u %10d\n", pi, &pi, *pi);
//     printf(" ppi%10u %10u %10u %10u\n", ppi, &ppi, *ppi, **ppi);
//     printf("--------------------------------------------------\n");

//     return 0;
// }

// void swap_ptr(char **ppa, char **ppb);

// int main(void)
// {
//     char *pa = "success";
//     char *pb = "failure";

//     printf("pa -> %s, pb -> %s\n", pa, pb);
//     swap_ptr(&pa, &pb);
//     printf("pa -> %s, pb -> %s\n", pa, pb);

//     return 0;
// }

// void swap_ptr(char **ppa, char **ppb)
// {
//     char *pt;

//     pt = *ppa;
//     *ppa = *ppb;
//     *ppb = pt;
// }

//15-5
// int main(void)
// {
//     int ary[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
//     int (*pa)[4];
//     int i,j;

//     pa = ary;
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 4; j++)
//         {
//             printf("%5d", pa[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//15-6

//15-7
// int sum(int, int);

// int main(void)
// {
//     int(*fp)(int, int);
//     int res;

//     fp = sum;
//     res = fp(10,20);
//     printf("result: %d\n", res);

//     return 0;
// }

// int sum(int a, int b)
// {
//     return(a+b);
// }

//15-8
// void func(int (*fp)(int, int));
// int sum(int a, int b);
// int mul(int a, int b);
// int max(int a, int b);

// int main(void)
// {
//     int sel;

//     printf("01. 두 정수의 합 \n");
//     printf("02. 두 정수의 곱 \n");
//     printf("03. 두 정수 중에 큰 값 계산\n");

//     printf("원하는 연산 선택: ");
//     scanf("%d", &sel);

//     switch (sel)
//     {
//     case 1: func(sum); break;
//     case 2: func(mul); break;
//     case 3: func(max); break;
//     }
//     return 0;

// }

// void func(int(*fp)(int, int))
// {
//     int a, b;
//     int res;

//     printf("두 정수의 값을 입력하세요: ");
//     scanf("%d%d", &a, &b);
//     res = fp(a, b);
//     printf("결과값은 %d\n", res);
// }

// int sum(int a, int b)
// {
//     return (a + b);
// }

// int mul(int a, int b)
// {
//     return (a * b);
// }

// int max(int a, int b)
// {
//     if (a > b) return a;
//     else return b;
// }

//15-9
// int main(void)
// {
//     int a = 10;
//     double b = 3.5;
//     void *vp;

//     vp = &a;
//     printf("a: %d\n", *(int *)vp);

//     vp = &b;
//     printf("b: %.1lf\n", *(double *)vp);

//     return 0;
// }

//[정규화 예제]
// double math(double sen, double i_min, double i_max, double o_min, double o_max)
// {
//     double result = (sen - i_min) * (o_max - o_min)/(i_max - i_min) + o_min;
//     return result;
// }

// void normalize(int count, double sensor[], double norm[],double i_min, double i_max, double o_min, double o_max)
// {
//     for (int i = 0; i < count; i++)
//     {
//         norm[i] = math(sensor[i], i_min, i_max, o_min, o_max);
//     }
    
// }

// int main(void)
// {
//     int count = 0;
//     double sen[5], norm[5];
//     double i_min, i_max, o_min, o_max;

//     printf("센서 입력값(5개): ");
//     for ( count = 0; count < 5; count++)
//     {
//         scanf("%lf", &sen[count]);
//     }
//     printf("입력 범위[1~1023]: ");
//     scanf("%lf %lf", &i_min, &i_max);

//     printf("출력 범위[1~100]: ");
//     scanf("%lf %lf", &o_min, &o_max);
    
//     normalize(5, sen, norm, i_min, i_max, o_min, o_max);

//     printf("        [정규화 결과!!]\n");
//     for (count = 0; count < 5; count++)
//     {
//         printf("%d번째 센서 : %.1f   ==>  정규화 값 : %.1f\n", count, sen[count], norm[count]);
//     }
    
// }

//[예제(프로필 교환)]
// void swap(void *a, void *b, int size)
// {
// // 자료형에 관계없이 void 포인터를 사용한다.
// char *pa = (char *)a;
// char *pb = (char *)b;

// // 전달받은 크기만큼 교환한다.
// for (int i = 0; i < size; i++)
// {
//     char temp = pa[i];
//     pa[i] = pb[i];
//     pb[i] = temp;
// }
// }

// void change(double age[2], double height[2])
// {
// // age 배열의 두 요소를 교환한다.
// swap(&age[0], &age[1], sizeof age[0]);
// // height 배열의 두 요소도 교환한다.
// swap(&height[0], &height[1], sizeof height[0]);
// }

// int main(void)
// {
// double age[2], height[2];

// printf("첫 번째 사람의 나이와 키: ");
// if (scanf("%lf %lf", &age[0], &height[0]) != 2)
//     return 1;

// printf("두 번째 사람의 나이와 키: ");
// if (scanf("%lf %lf", &age[1], &height[1]) != 2)
//     return 1;

// change(age, height);

// printf("첫 번째 사람의 나이와 키: %.1f %.1f\n", age[0], height[0]);
// printf("두 번째 사람의 나이와 키: %.1f %.1f\n", age[1], height[1]);

// return 0;
// }

