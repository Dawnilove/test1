#include <stdio.h>
#include <string.h>

//1-1
// int main(void)
// {
//     char ch;
//     int i;

//     for (i = 0; i < 10; i++)
//     {
//         scanf("%c", &ch);
//         printf("%c", ch);
//     }
//     printf("\n");

//     return 0;
// }

//1-2
// int main(void)
// {
//     int res;
//     char ch;

//     while(1)
//     {
//         res = scanf("%c", &ch);
//         if(res == -1) break;
//         printf("%d", ch);
//     }

//     return 0;
// }

//1-3
// void my_gets(char *str, int size);

// int main(void)
// {
//     char str[7];

//     my_gets(str, sizeof(str));
//     printf("입력 문자열: %s\n", str);

//     return 0;
// }

// void my_gets(char *str, int size)
// {
//     int ch;
//     int i = 0;

//     ch = getchar();
//     while ((ch != '\n')&&(i <size -1))
//     {
//         str[i] = ch;
//         i++;
//         ch = getchar();
//     }
//     printf("%d \n", ch);
//    // str[i] = '\0';

// }

//1-5
// int main(void)
// {
//     int num, grade;

//     printf("학번 입력: ");
//     scanf("%d", &num);
//     getchar();
//     printf("학점 입력: ");
//     grade = getchar();
//     printf("학번: %d, 학점 : %c", num, grade);       //grade를 %d로 하면 아스키 코드로 출력 문자로 출력하려면 %c로 해야한다.

//     return 0;
// }

//1-6
// int main(void)
// {
//     printf("apple 저장 시작 주소: %p\n", "apple");
//     printf("두번째 문자열 주소: %p\n", "apple" + 1);
//     printf("첫번째 문자: %c\n", *"apple");
//     printf("두번째 문자: %c\n", *("apple"+1));
//     printf("배열로 나타낸 3번째 문자: %c\n","apple"[2]);

//     return 0;
// }

//1-7
// int main(void)
// {
//     char *dessert = "apple";

//     printf("오늘 후식 %s\n", dessert);
//     printf("%p\n", (void *)dessert);

//     dessert = "banana";
//     printf("내일 후식: %s\n", dessert);
//     printf("%p\n", (void *)dessert);

//     return 0;
// }

//1-8
//[scanf 사용]
// int main(void)
// {
//     char str[80];

//     printf("문자열 입력: ");
//     scanf("%s", str);
//     printf("첫 단어: %s\n", str);
//     scanf("%s", str);
//     printf("버퍼에 남아 있는 두번째 단어: %s\n", str);

//     return 0;
// }

// [gets 사용]
// int main(void)
// {
//     char str[80];

//     printf("문자열 입력: ");
//     gets(str);
//     printf("%s\n", str);
   
//     return 0;
// }

//1-9
// int main(void)
// {
//     char str[80];

//     printf("문자열 입력: ");
//     fgets(str, sizeof(str),stdin);
//     printf("%s\n", str);
   
//     return 0;
// }

//1-10
// int  main(void)
// {
//     int age;
//     char name[20];
//     printf("나이 입력: ");
//     scanf("%d", &age);

//     printf("이름 입력: ");
//     gets(name);
//     printf("나이: %d, 이름: %s\n", age, name):

//     return 0;
// }

//1-11
// int main(void)
// {
//     char str[80] = "apple jam";
//     char *ps = "banana";

//     puts(str);
//     fputs(ps, stdout);
//     puts("milk");

//     return 0;
// }

//1-12
// int main(void)
// {
//     char str1[80] = "strawberry";
//     char str2[80] = "apple";
//     char *ps1 = "banana";
//     char *ps2 = str2;


//     printf("최초 문자열: %s\n", str1);
//     strcpy(str1, str2);
//     printf("바뀐 문자열: %s\n", str1);

//     strcpy(str1, ps1);
//     printf("바뀐 문자열: %s\n", str1);

//     strcpy(str1, ps2);
//     printf("바뀐 문자열: %s\n", str1);

//     strcpy(str1, "banana");
//     printf("바뀐 문자열: %s\n", str1);

//     return 0;
// }

//1-13
// int main(void)
// {
//     char str[20] = "mango tree";

//     strcpy(str, "apple-pie", 5);

//     printf("%s\n", str);

//     return 0;
// }

//1-14
// int main(void)
// {
//     char str[80] = "straw";

//     strcat(str, "berry");
//     printf("%s\n", str);

//     strncat(str, "piece", 3);
//     printf("%s\n", str);

//     return 0;
// }

//1-15
// int main(void)
// {
//     char str1[80], str2[80];
//     char *resp;

//     printf("2개의과일 이름 입력: ");
//     scanf("%s%s",str1,str2);

//     if (strlen(str1) > strlen(str2))
//     {
//         resp = str1;
//     }
//     else
//         resp = str2;

//     printf("이름이 긴 과일은: %s\n", resp);

//     return 0;
// }

//1-16
// int main(void)
// {
//     char str1[80] = "peach";
//     char str2[80] = "pear";

//     printf("사전에 나중에 나오는 과일 이름: "); //str1이 먼저면 1반환/str2가 먼저면 -1/같으면 0

//     if (strcmp(str1,str2) > 0)
//     {
//         printf("%s\n", str1);
//     }
//     else printf("%s\n", str2);

//     printf("사전에 먼저 나오는 과일 이름: ");

//     if (strcmp(str1,str2) < 0)
//     {
//         printf("%s\n", str1);
//     }
//     else printf("%s\n", str2);

//     return 0;
    
// }


//[연습문제]
// int main(void)
// {
//     char str1[80], str2[80], str3[80], temp[80];

//     printf("단어 3개를 입력: ");

//     if (scanf("%79s %79s %79s", str1, str2, str3) != 3) {
//         printf("입력이 올바르지 않습니다.\n");
//         return 1;
//     }

//     if (strcmp(str1, str2) > 0) {
//         strcpy(temp, str1);
//         strcpy(str1, str2);
//         strcpy(str2, temp);
//     }

//     if (strcmp(str2, str3) > 0) {
//         strcpy(temp, str2);
//         strcpy(str2, str3);
//         strcpy(str3, temp);
//     }

//     if (strcmp(str1, str2) > 0) {
//         strcpy(temp, str1);
//         strcpy(str1, str2);
//         strcpy(str2, temp);
//     }

//     printf("사전순: %s %s %s\n", str1, str2, str3);
//     return 0;
// }


//13-1
// void assign(void);

// int main(void)
// {
//     auto int a = 0;

//     assign();
//     printf("main 함수 a: %d\n", a);

//     return 0;
// }

// void assign(void)
// {
//     int a;

//     a= 10;
//     printf("assign 함수 a: %d\n", a);
// }

//13-2

//13-3

//13-4

// void auto_func(void);
// void static_func(void);

// int main(void)
// {
//     int i;

//     printf("일반 지역 변수 활용 함수....\n");
//     for ( i = 0; i < 3; i++)
//     {
//         auto_func();
//     }

//     printf("정적 지역 변수 활용 함수...\n");
//     for ( i = 0; i < 3; i++)
//     {
//         static_func();
//     }
    
//     return 0;
// }

// void auto_func(void)
// {
//     auto int a = 0;

//     a++;
//     printf("%d\n", a);

// }

// void static_func(void)
// {
//     static int a;

//     a++;
//     printf("%d\n", a);
// }
//13-5


//13-6

//13-7

//13-8

//14-1
//  int main(void)
//  { 
//     int score[3][4];
//     int total;
//     double avg;
//     int i,j;

//     for ( i = 0; i < 3; i++)
//     {
//         printf("4과목 점수 입력: ");
//         for ( j = 0; j < 4; j++)
//         {
//             scanf("%d", &score[i][j]);
//         }
//     }
    
//     for ( i = 0; i < 3; i++)
//     {
//         total = 0;
//         for ( j = 0; j < 4; j++)
//         {
//             total += score[i][j];
//         }
        
//         avg = total /4.0;
//         printf("총점: %d, 평균: %.2lf\n", total, avg);
//     }
    
//     return 0;
//  }

 //14-2
// int main(void)
// {
//     int num[3][4] = {
//         {1,2,3,4}, {5,6,7,8}, {9,10,11,12}
//     };

//     int i, j;

//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 4; j++)
//         {
//             printf("%5d", num[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//14-3
// int main(void)
// {
//     char animal[5][20];
//     int i;
//     int count;

//     count = sizeof(animal)/sizeof(animal[0]);
//     for (i = 0; i < count; i++)
//     {
//         scanf("%s", animal[i]);
//     }

//     for (i = 0; i < count; i++)
//     {
//         printf("%s  ",animal[i]);
//     }

//     return 0;
    
// }

//14-4


//14-5
// #include <stdio.h>

// int main(void)
// {
//     int score[2][3][4] = {
//         {{72,80,95,60}, {68,98,83,90}, {75,72,84,90}},
//         {{66,85,90,88}, {95,92,88,95}, {43,72,56, 75}}
//     };

//     int i,j,k;

//     for ( i = 0; i < 2; i++)
//     {
//         printf("%d반 score \n", i+1);
//         for ( j = 0; j < 3; j++)
//         {
//             for (k = 0; k < 4; k++)
//             {
//                 printf("%5d", score[i][j][k]);
//             }
//             printf("\n");
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

#include <stdio.h>

int main(void)
{
    int score[2][5][5] = {
        {{'*',' ',' ',' ',' '}, {' ','*',' ',' ',' '}, {' ',' ','*',' ',' '},{' ',' ',' ','*',' '},{' ',' ',' ',' ','*'}},
        {{' ',' ',' ',' ','*'}, {' ',' ',' ','*',' '}, {' ',' ','*',' ',' '},{' ','*',' ',' ',' '},{'*',' ',' ',' ',' '}},
    };

    int i,j,k;

    for ( i = 0; i < 2; i++)
    {
        printf("[%d]\n", i+1);

        for ( j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                printf("%3c", score[i][j][k]);
            }
            printf("\n");
            
        }
    }
        printf("\n");

        printf("X자 모양\n");
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                if (score[0][j][k] == '*' || score[1][j][k] == '*')
                    printf("%3c", '*');
                else
                    printf("%3c", ' ');
            }
            printf("\n");
        }

    return 0;
}