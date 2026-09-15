//1-1
// #include <stdio.h>

// int main(void)
// {
    
//     int ary[3] = { 10, 20, 30}; // 정수 3개를 저장할 배열을 선언하고 초기값을 지정한다.
    
//     int *pa = ary; // 포인터 pa가 배열의 첫 번째 요소를 가리키도록 설정한다.
//     int i;


//     printf("배열의 값: ");
    
//     for (i = 0; i < 3; i++) // 배열의 모든 요소를 순서대로 출력한다.
//     {
       
//         printf("%d ", *pa);  // pa가 가리키는 현재 배열 요소의 값을 출력한다.
       
//         pa++;  // 포인터를 다음 배열 요소 위치로 이동한다.
//     }
    
//     printf("\n");
    
//     return 0;
// }

//1-2
// #include <stdio.h>

// int main(void)
// {
//     int ary[5] = { 10, 20, 30, 40, 50};
//     int *pa = ary; //첫 배열 요소 주소
//     int *pb = pa + 3; //네번째 배열 요소 주소

//     printf("pa: %u\n ", pa);
//     printf("pb: %u\n", pb);

//     pa++; //pa 다음 배열 요소 이동
//     printf("pb - pa : %u\n", pb - pa); //포인터 뺄셈
//     printf("[pb - pa]자료형의 크기 : %u\n", sizeof(pb-pa));

//     printf("앞 배열 요소 값 출력 : ");
//     if (pa < pb) //조건에 따른 출력
//     {
//         printf("%d\n", *pa);
//     }
//     else
//     {
//         printf("%d\n", *pb);
//     }
    
//     return 0;
// }

//[연습문제] //다시 해보기
// 1-1: 100 x
// 1-2: 3.5 x
// 1-3: 116 o
// 1-4: 0.5 o
// 1-5: 7.4 o
// 1-6: 2 o

// 2-1: x x
// 2-2: x o
// 2-3: o o
// 2-4: o o
// 2-5: o o [범위 벗어남]
// 2-6: o x

// 3: ++pb


// #include <stdio.h>
// int main()
// {
//     double ary[5] = {1.2, 3.5, 7.4, 0.5, 10.0};
//     double *pa = ary;
//     double *pb = ary +2;

//     printf("%p",ary);
//     printf("%lf",*(ary+1));
//     printf("%p",pa + 2);
//     printf("%lf",pa[3]);
//     printf("%lf",*pb);
//     printf("%td",pb - pa);

// }

// //1-4
// #include <stdio.h>
// void print_ary(int *pa); //반환X
// int main(void)
// {
//     int ary[5] = { 10, 20, 30, 40, 50}; //배열 설정
//     print_ary (ary); //함수 호출[ary 참조]  [int *pa = ary]

//     return 0;
// }

// void print_ary(int *pa)
// {
//     int i;

//     for (i = 0; i < 5; i++)
//     {
//         printf("%d\n", pa[i]); //10 20 30 40 50 하나씩 출력 5회 출력
//     }
    
// }//반환 X

//라이다 [한개만 찾기]
// #include <stdio.h>
// int main(void)
// {
//     double dist[360];
//     int i, min_index = 0;
//     double min_dis;
    
//     printf("라이다 값 입력 [10개]\n");//수치 입력[각 각도에 따른 거리(10개만 예시 입력 문구)]
//     for ( i = 0; i < 10; i++)
//     {
//         printf("%2d도 거리: ", i);
//         scanf("%lf", &dist[i]);
//     }

//     min_dis = dist[0]; //초기 거리가 기준점 세팅
//     for ( i = 0; i < 10; i++) //거리 측정시마다 최소 거리랑 비교 후 갱신
//     {
//         if(dist[i] < min_dis){
//             min_dis = dist[i];
//             min_index = i;
//         }

//     }
//     //결과값 출력
//     printf("[라이다 최소거리 탐색]\n");
//     printf("최소 거리: %.1f 방향: %d\n", min_value, min_index);
    
// }

//라이다 [3개 찾기]


//-----------

//1-5[코드는 이렇게]
// #include <stdio.h>

// void input_ary(double *pa, int size);
// double find_max(double *pa, int size);

// int main(void)
// {
//     double ary[5];
//     double max;
//     int size = sizeof(ary) / sizeof(ary[0]);

//     input_ary(ary, size);
//     max = find_max(ary, size);
//     printf("배열의 최댓값: %.1lf\n", max);

//     return 0;
    
// }

// void input_ary(double *pa, int size)
// {
//     int i;

//     printf("%d 개의 실수값 입력: ", size);

//     for ( i = 0; i < size; i++)
//     {
//         scanf("%lf", pa + i);
//     }
    
// }

// double find_max(double *pa, int size)
// {
//     double max;
//     int i;

//     max = pa[0];
//     for (i = 1; i < size; i++)
//     {
//         if (pa[i] > max) max = pa[i];
//     }
    
//     return max;
// }

//1-6
// #include<stdio.h>

// int main(void)
// {
//     char small, cap = 'G';

//     if ((cap >= 'A') && (cap <= 'Z'))
//     {
//         small = cap + ('a' - 'A');
//     }

//     printf("대문자: %c %c", cap, '\n');
//     printf("소문자: %c\n", small);

//     return 0;
// }

//1-8
// #include<stdio.h>

// int main(void)
// {
//     char ch1, ch2;

//     scanf("%c%c", &ch1, &ch2);
//     printf("[%c%c]\n", ch1, ch2);

//     return 0;
// }


//[예제 1]
// #include <stdio.h>
// int main()
// {
// int a = 10;
// int *pa;
// pa = &a;
// *pa = 20;
// printf("%d\n", a);
// }

//[예제 2]
// #include <stdio.h>

// void swap(int *a, int *b, int c, int d)
// {
//     int base;
//     base = *a;
//     *a = *b;
//     *b = base;

//     base = c;
//     c = d;
//     d = base;
//     printf("call by value: %d, %d\n", c, d);
// }


// int main()
// {
//     int a = 1, b = 2;
//     int c = 3, d = 4;
//     printf("before: %d, %d, %d, %d\n", a, b, c, d);
//     swap(&a, &b, c, d);
//     printf("after:  %d, %d, %d, %d\n", a, b, c, d);
// }



//[예제 3]
#include <stdio.h>
#include <string.h>

// int main()
// {
//     int p[5] = {10, 20, 30, 40, 50};

//     int *pl = p;
//     print_array(pl, 5);

//     return 0;

//     int
//     for ( i = 0; i < 5; i++)
//     {
//         printf("%c", list)
//         *pl + 1;
//     }
    
// }

//[예제 4]
// int mystlen(const char *str); //문자열 길이 계산 함수 선언(const char *은 문자열 내용 함수 내 변경 X)

// int main(void)
// {
//     char my[100];
//     printf("문자열 입력: ");
//     fgets(my, sizeof my, stdin); //문자열(공백 포함)을 입력 받아 my에 저장

//     int len = mystlen(my); //len = count[문자열의 시작 주소를 함수에 전달]

//     printf("length: %d\n", len);

//     return 0;
// }


// int mystlen(const char *mylen) //my의 주소를 mylen에 할당
// {
//     int count = 0;
//     while (*mylen != '\0') //공백은 포함하여 문자열 끝까지... [&& *mylen != '\n']: 줄바꿈까지 
//     {
//         count++; //하나 세고
//         mylen++;//한칸 넘기고
//     }
    
//     return count; //계산된 수를 다시 돌려주기
    
// }

//[예제 5]
int main(void)
{
    int ch;

    ch = getchar();

    printf("입력 문자: ");
    putchar(ch);
    putchar('\n');

    return 0;
}