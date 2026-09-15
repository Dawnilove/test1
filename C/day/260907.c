//1-1
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main(void){

//     srand(time(NULL));
//     int i; //속도 데이터 갯수 변수 지정
//     int v[10]; //속도 데이터 배열 10
//     int j = 0, k = 0; //급가속, 급제동 횟수 변수 지정


//     for (i = 0; i < 10; i++) // i가 한 개씩 증가
//     {
//         v[i] = rand() % 101; //i번쩨 속도 데이터에 랜덤한 숫자 할당(0~100 사이)
//         if (v[i] < 0) v[i] = 0;

//         printf("v[%d] = %d \n", i, v[i]); //속도 데이터 출력
//     }
    

//     for (i = 0; i < 9; i++) // i가 한 개씩 증가
//     {
//         double delta_v = (double) v[i+1] - v[i]; //인접 시점간의 속도 변화량 계산식 지정
//         if (delta_v >= 10)
//         {
//             j++; //속도변화량이 +10이상 일시 급가속 횟수 1증가
//         }

//         else if (delta_v <= -10)
//         {
//             k++; //속도변화량이 -10이상 일시 급제동 횟수 1증가
//         }
//         printf("속도 변화량[%d]: %lf \n", i+1, delta_v);
//     }
    
//     printf("\n");
//     printf("\n");
//     printf("[급가속 / 급제동 횟수]\n");
//     printf(" 급가속 횟수: %d\n", j); //급가속 횟수 출력
//     printf(" 급제동 횟수: %d\n", k); //급제동 횟수 출력
// }


//1-2[속도 방향성 10개 이상 유지 해보기]
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main(void) {
//     srand(time(NULL));
//     int i; 
//     int v[10]; // 속도 데이터 배열 
//     int j = 0, k = 0; // 급가속, 급제동 횟수 변수

//     v[0] = rand() % 101; // 0 ~ 100 사이 초기 속도
//     printf("v[0] = %d \n", v[0]);

//     for (i = 1; i < 10; i++) {
//         int change = (rand() % 21) - 10; // -10 ~ +10 사이의 변화량 생성
//         v[i] = v[i - 1] + change;

//         // 속도가 0 미만 보정
//         if (v[i] < 0) v[i] = 0;
//         // if (v[i] > 100) v[i] = 100;

//         printf("v[%d] = %d \n", i, v[i]); // 속도 데이터 출력
//     }
    
//     printf("\n");
//     printf("\n[속도 변화량 계산]\n");
    
//     for (i = 0; i < 9; i++) {
//         double delta_v = (double)v[i + 1] - v[i]; // 속도 변화량
        
//         if (delta_v >= 7) {
//             j++; // 급가속 1 증가
//         } else if (delta_v <= -7) {
//             k++; // 급제동 1 증가
//         }
        
//         printf("속도 변화 [%d -> %d]: %.1lf \n", i, i + 1, delta_v);
//     }
    
//     printf("\n");
//     printf("[급가속 / 급제동 횟수 결과]\n");
//     printf(" 급가속 횟수: %d\n", j); // 급가속 횟수 출력
//     printf(" 급제동 횟수: %d\n", k); // 급제동 횟수 출력
//     printf("\n");

//     return 0;
// }

//1-3 [gemini 제작]
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// #define DATA_SIZE 20 // 데이터 개수를 10개 이상(20개)으로 확장

// int main(void) {
//     srand(time(NULL));
//     int i; 
//     int v[DATA_SIZE]; // 속도 데이터 배열 
//     int j = 0, k = 0; // 급가속, 급제동 횟수 변수
//     int direction = 1; // 속도 방향성 유지 변수 (1: 증가 추세, -1: 감소 추세)
//     int streak = 0;    // 방향성을 유지한 횟수

//     v[0] = rand() % 51 + 25; // 25 ~ 75 사이의 안정적인 초기 속도
//     printf("v[0] = %d \n", v[0]);

//     for (i = 1; i < DATA_SIZE; i++) {
//         // 일정 확률로 방향을 바꿀지 유지할지 결정 (방향성을 유지하기 위함)
//         if (streak <= 0) {
//             direction = (rand() % 2 == 0) ? 1 : -1; // 새로운 방향 설정
//             streak = rand() % 5 + 3; // 3~7번 동안 이 방향 유지
//         }
        
//         int change = ((rand() % 8) + 3) * direction; // 3 ~ 10 사이의 변화량에 방향 적용
//         v[i] = v[i - 1] + change;

//         // 속도 범위 보정 (0 ~ 100)
//         if (v[i] < 0) {
//             v[i] = 0;
//             direction = 1; // 바닥을 치면 방향을 위로 전환
//         } else if (v[i] > 100) {
//             v[i] = 100;
//             direction = -1; // 천장에 닿으면 방향을 아래로 전환
//         }

//         streak--; // 유지 횟수 감소
//         printf("v[%d] = %d \n", i, v[i]); // 속도 데이터 출력
//     }
    
//     printf("\n");
//     printf("\n[속도 변화량 계산]\n");
    
//     for (i = 0; i < DATA_SIZE - 1; i++) {
//         double delta_v = (double)v[i + 1] - v[i]; // 속도 변화량
        
//         if (delta_v >= 7) {
//             j++; // 급가속 1 증가
//         } else if (delta_v <= -7) {
//             k++; // 급제동 1 증가
//         }
        
//         printf("속도 변화 [%2d -> %2d]: %5.1lf \n", i, i + 1, delta_v);
//     }
    
//     printf("\n");
//     printf("[급가속 / 급제동 횟수 결과]\n");
//     printf(" 급가속 횟수: %d회\n", j); // 급가속 횟수 출력
//     printf(" 급제동 횟수: %d회\n", k); // 급제동 횟수 출력
//     printf("\n");

//     return 0;
// }

//1-4
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main(void)
// {
//     srand(time(NULL));

//     int i;
//     int b[10];
//     int stat = 0;

//     for (i = 0; i < 10; i++)
//     {
//         b[i] = rand() % 101;
//     }

//     for ( i = 0; i < 10; i++)
//     {
//         if (b[i] <= 30)
//         {
//             stat = 1;
//         }
//         else if (b[i] >= 35)
//         {
//             stat = 0;
//         }
//         if (stat == 1)
//         {
//             printf("잔량: %d  배터리 잔량이 부족합니다.\n", b[i]);
//         }
//         else
//         {
//             printf("잔량: %d \n", b[i]);
//         }   
//     }
    
//     return 0;
// }

//1-5
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// int main(void)
// {
//     srand(time(NULL));
//     int i, value[16];
//     int label[16];
//     int sum = 0;
//     const int threshold = 512;

//    for (i = 0; i < 16; i++)
//    {
//     value[i] = rand() % 1025;

//     if (value[i] < threshold)
//     {
//         label[i] = 0;
//     }
//     else if (value[i] >= threshold)
//     {
//         label[i] = 1;
//     }

//    }

//    for ( i = 0; i < 16; i++)
//    {
//     sum += label[i];
//    }

//    if (sum < 6)
//    {
//     printf("좌로 이동 \n");
//    }

//    else if (sum > 6)
//    {
//     printf("우로 이동 \n");
//    }
//    else if (sum == 6)
//    {
//     printf("직진 \n");
//    }

//    else
//    {
//     printf("error \n");
//    }

//    return 0;
// }

//1-6
#include <stdio.h>

// int main(void)
// {
//     int a; //일반 변수 선언
//     int *pa; //포인터 선언(주소만 넣기 가능!!)

//     pa = &a;    //포인터에 a의 주소 대입
//     *pa = 10;   //포인터로 변수 a에 10 대입

//     printf("포인트로 a값 출력: %d\n", *pa);
//     printf("변수명으로 a값 출력: %d\n", a);
//     return 0;
// }

//1-7
// int main(void)
// {
//     int a = 10, b = 15, total; // 두 정수와 합계를 저장할 변수 선언
//     double avg; // 평균을 저장할 실수형 변수 선언
//     int *pa, *pb; // a와 b의 주소를 저장할 정수형 포인터 선언

//     int *pt = &total; // total의 주소를 pt에 저장
//     double *pg = &avg; // avg의 주소를 pg에 저장

//     pa = &a; // a의 주소를 pa에 저장
//     pb = &b; // b의 주소를 pb에 저장

//     *pt = *pa + *pb; // 포인터로 a와 b의 값을 더해 total에 저장
//     *pg = *pt / 2.0; // total을 2로 나누어 평균을 계산하고 avg에 저장


//     printf("두 정수의 값: %d, %d\n", *pa, *pb); // 포인터로 두 정수의 값 출력
//     printf("정수 합: %d\n", *pt); // 포인터로 정수 합 출력
//     printf("평균: %.1lf\n", *pg); // 포인터로 평균 출력

//     return 0;

// }


//1-8
// int main(void)
// {
    
//     int a= 10, b =20;
//     const int *pa = &a; //포인트 pa는 변수 a를 가리킨다.

//     printf("변수 a 값: %d\n", *pa); //포인터를 간접 참조하여 a출력
//     pa = &b;//포인터가 변수 b를 가르킴
//     printf("변수 b 값: %d\n", *pa); //포인터를 간접 참조하여 b값 출력
//     pa = &a;// 포인터가 다시 변수 a를 가르킴
//     a =20; //a를 직접 참조하여 값 변경

//     printf("변수 a 값: %d\n", *pa); //포인터로 간접 참조하여 바뀐 값 출력

//     return 0;
// }

//1-9 ????
// #include <stdio.h>

// int main(void)
// {
//     char ch;
//     int in;
//     double db;

//     char *pc = &ch;
//     int *pi = &in;
//     double *pd = &db;

//     printf("char형 변수의 주소 크기: %d\n", sizeof(&ch));
//     printf("int형 변수의 주소 크기: %d\n", sizeof(&in));
//     printf("double형 변수의 주소 크기: %d\n", sizeof(&db));

//     printf("char * 포인터 크기: %d\n", sizeof(pc));
//     printf("int * 포인터 크기: %d\n", sizeof(pi));
//     printf("double * 포인터 크기: %d\n", sizeof(pd));

//     printf("char * 포인터가 가르키는 변수 크기: %d\n", sizeof(*pc));
//     printf("int * 포인터가 가르키는 변수 크기: %d\n", sizeof(*pi));
//     printf("double * 포인터가 가르키는 변수 크기: %d\n", sizeof(*pd));

//     return 0;
// }

//1-10
// #include <stdio.h>

// int main(void)
// {
//     int a = 10;
//     int *p = &a;
//     double *pd;

//     pd = (double *) p;
//     printf("%lf\n", *pd);

//     return 0;
// }

//1-11[???]
// #include <stdio.h>

// void swap(int *pa, int *pb);
// int main(void)
// {
//     int a= 10, b = 20;

//     swap(&a, &b);
//     printf("a: %d, b:%d\n", a, b);

//     return 0;
// }

// void swap(int *pa, int *pb)
// {
//     int temp;

//     temp = *pa;
//     *pa = *pb;
//     *pb = temp;
// }


//1-12 [포인터로 가져가야하는 구문]
// #include <stdio.h>

// void swap(void);

// int main(void)
// {
//     int a = 10, b = 20;

//     swap();
//     printf("a: %d, b: %d\n", a, b);

//     return 0;
// }

// void swap(void)
// {
//     int temp, /*a, b*/;

//     temp = a;
//     a= b;
//     b= temp;
// }

//1-13 [왜 ary[i]로 안하고 ary + i로 하는거지??]
// #include <stdio.h>

// int main(void)
// {
//     int ary[3]; // 크기가 3인 정수형 배열 선언
//     int i;      // 반복문에 사용할 변수 선언

//     // 포인터 연산을 이용해 첫 번째 요소에 10 대입 (*(ary + 0)은 ary[0]과 같음)
//     *(ary + 0) = 10;
    
//     // 두 번째 요소에 첫 번째 요소의 값 + 10을 대입
//     *(ary + 1) = *(ary + 0) + 10;

//     // 세 번째 배열 요소에 키보드 입력 받기
//     // scanf는 주소값을 받아야 하므로, ary[2]의 주소인 ary + 2 (또는 &ary[2])를 전달
//     printf("세번째 배열 요소에 키보드 입력: ");
//     scanf("%d", ary + 2);

//     // 0부터 2까지 반복하며 배열의 모든 요소를 출력
//     for (i = 0; i < 3; i++)
//     {
//         // *(ary + i)는 ary[i]와 같으며, i번째 요소의 값을 가져와 출력
//         printf("%5d\n", *(ary + i));
//     }
    
//     return 0;
// }

//1-14 *배열명은 주소와 같다!!
// #include <stdio.h>
// int main(void)
// {
//     int ary[3];
//     int *pa = ary;
//     int i;

//     *pa = 10;
//     *(pa + 1) = 20;
//     pa[2] = pa[0] + pa[1];

//     for (i = 0; i < 3; i++)
//     {
//         printf("%5d\n", pa[i]);
//     }
    
//     return 0;
// }

//1-15
#include <stdio.h>

int main(void)
{
    int ary[3] = {10, 20, 30};
    int *pa = ary;
    int i;


    printf("배열의 값: ");

    for ( i = 0; i < 3; i++)
    {
        printf("%d ", *pa);
        pa++;
    }
    
    return 0;
}