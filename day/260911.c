#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int main(void)
// {
//     int *pi;
//     double *pd;

//     pi = (int *)malloc(sizeof(int));
//     if (pi == NULL)
//     {
//         printf("메모리 부족\n");
//         exit(1);
//     }
//     pd = (double *)malloc(sizeof(double));

//     *pi = 10;
//     *pd = 3.4;

//     printf("정수형 : %d\n", *pi);
//     printf("실수형: %.1lf\n", *pd);


//     free(pi);
//     free(pd);

//     return 0;
// }

//16-2
// int main(void)
// {
//     int *pi;
//     int i, sum = 0;

//     //pi = (int*)malloc(5*sizeof(int));
//     pi = (int*)malloc(i); //사이즈 i의 메모리 할당[i가 할당되지 않아 쓰레기값 입력되어 있다!!]
//     if (pi == NULL)
//     {
//         printf("메모리 부족!!");
//         exit;
//     }

//     printf("다섯 명의 나이를 입력 하세요 : ");

//     for (i = 0; i < 5; i++)
//     {
//         scanf("%d", &pi[i]);
//         sum += pi[i];
//     }

//     printf("다섯 명의 평균 나이: %.1lf\n", (sum/5.0));
//     free(pi);

//     return 0;
    
// }

// //16-3
// int main(void)
// {
//     int *pi;
//     int size = 5;
//     int count =0;
//     int num;
//     int i;

//     pi = (int *)calloc(size, sizeof(int));
//     while(1)
//     {
//         printf("양수만 입력: ");
//         scanf("%d", &num);
//         if(num <= 0) break;
//         if (count == size)
//         {
//             size += 5;
//             pi = (int *)realloc(pi, size * sizeof(int));
//         }

//         pi[count++] = num;
//     }
//     for (i = 0; i < count; i++)
//     {
//         printf("%5d", pi[i]);
//     }
//     free(pi);

//     return 0;
// }

//16-4
// int main(void)
// {
//     char temp[80];
//     char *str[3];
//     int i;

//     for (i = 0; i < 3; i++)
//     {
//         printf("문자열을 입력하세요: ");
//         gets(temp);
//         str[i] = (char*)malloc(strlen(temp) +1);
//         strcpy(str[i], temp);
//     }
    
//     for ( i = 0; i < 3; i++)
//     {
//         printf("%s\n", str[i]);
//     }

//     for (i = 0; i < 3; i++)
//     {
//         free(str[i]);
//     }
//     return 0;
// }

//16-5
// void print_str(char **ps);
// int main(void)
// {
//     char temp[80];
//     char *str[21] = {0};
//     int i = 0;

//     while (i < 20)
//     {
//         printf("문자열을 입력하세요 : ");
//         gets(temp);
//         if (strcmp(temp, "end") == 0) break;
//         str[i] = (char*)malloc(strlen(temp) + 1);
//         strcpy(str[1], temp);
//         i++;
//     }
//     print_str(str);
//     for ( i = 0; str[i] != NULL; i++)
//     {
//         free(str[i]);
//     }
//     return 0;
// }

// void print_str(char **ps)
// {
//     while (*ps != NULL)
//     {
//         printf("%s\n", *ps);
//         ps++;
//     }
// }

//16-6
// int main(int argc, char **argv)
// {
//     int i;

//     for (i = 0; i < argc; i++)
//     {
//         printf("%s\n", argv[i]);
//     }
//     return 0;
// }

//17-1
// struct student
// {
//     int num;
//     double grade;
// };

// int main(void)
// {
//     struct student s1;

//     s1.num = 2;
//     s1.grade = 2.7;
//     printf("학번: %d\n", s1.num);
//     printf("학점: %.1lf\n", s1.grade);

//     return 0;
// }

// struct student
// {
//     double grade;
//     int score;
//     short num;
//     char ch1;
//     char ch2;
//     char ch3;
// };


//17-2
// struct profile
// {
//     char name[20];
//     int age;
//     double height;
//     char *intro;
// };

// int main(void)
// {
//     struct profile yuni;
//     strcpy(yuni.name. "서하윤");
//     yuni.age = 17;
//     yuni.height = 164.5;

//     yuni.intro = (char*)malloc(80);
//     printf("자기소개 : ");
//     gets(yuni.intro);

//     printf("이름: %s\n", yuni.name);
//     printf("나이: %s\n", yuni.age);
//     printf("키: %.1lf\n", yuni.height);
//     printf("자기소개: %s\n", yuni.intro);
//     free(yuni.intro);

//     return 0;
// }

//17-3
// struct profile
// {
//     int age;
//     double height;
// };

// struct st
// {
//     struct profile pf;
//     int id;
//     double grade;

// };

// int main(void)
// {
//     struct st yuni;

//     yuni.pf.age = 17;
//     yuni.pf.height = 164.5;
//     yuni.id = 315;
//     yuni.grade = 4.3;

//     printf("%d\n",yuni.pf.age);
//     printf("%.1lf\n", yuni.pf.height);
//     printf("%d\n", yuni.id);
//     printf("%.1lf\n", yuni.grade);

//     return 0;

// }

//17-4
// struct st
// {
//     int id;
//     char name[20];
//     double grade;

// };

// int main(void)
// {
//     struct st s1={315, "홍길동", 2.4}, s2= {316,"이순신", 3.7}, {317, "세종대왕", 4.4};
//     struct st max;

//     max = s1;
//     if (s2.grade > max.grade) max = s2;
//     if (s3.grade > max.grade) max = s3;

//     printf("%d\n",yuni.pf.age);
//     printf("%.1lf\n", yuni.pf.height);
//     printf("%d\n", yuni.id);
//     printf("%.1lf\n", yuni.grade);

//     return 0;

// }

//17-5
// struct vision
// {
//     double left;
//     double right;
// };

// struct vision exchange(struct vision robot);

// int main(void)
// {
//     struct vision robot;

//     printf("시력 입력: ");
//     scanf("%lf%lf", &(robot.left), &(robot.right));
//     robot = exchange(robot);
//     printf("바뀐 시력: %.1lf %.1lf\n", robot.left, robot.right);

//     return 0;
// }

// struct vision exchange(struct vision robot)
// {
//     double temp;

//     temp = robot.left;
//     robot.left = robot.right;
//     robot.right = temp;

//     return robot;
// }

//17-6
// struct score
// {
//     int kor;
//     int eng;
//     int math;
// };

// int main(void)
// {
//     struct score yuni = {90, 80, 70};
//     struct score *ps = &yuni;

//     printf("%d\n",(*ps).kor);
//     printf("%d\n", ps -> eng);
//     printf("%d\n", ps -> math);

//     return 0;
// }

//17-7
// struct address

// {
//     char name[20];
//     int age;
//     char tel[20];
//     char addr[80];

// };

// int main(void)
// {
//     struct address list[5] = {{"홍길동", 23, "111-1111", "울릉도 독도"},
//     {"이순신", 35, "222-2222", "서울 건천동"}, {"장보고", 19, "333-3333", "완도 청해진"},
//     {"유관순", 15, "444-4444", "충남 천안"}, {"안중근", 45, "555-5555", "황해도 해주"}
//     };

//     int i;

//     for (i = 0; i < 5; i++)
//     {
//         printf("%10s%5d%15s%20s\n", list[i].name, list[i].age,list[i].tel, list[i].addr);
//     }

//     return 0;
// }


//17-8[??]
// struct address
// {
//     char name[20];
//     int age;
//     char tel[20];
//     char addr[80];
// };

// void print_list(struct address *lp);

// int main(void)
// {
//     struct address list[5] = {{"홍길동", 23, "111-1111", "울릉도 독도"}, 
//     {"이순신", 35, "222-2222", "서울 건천동"}, {"장보고", 19, "333-3333", "완도 청해진"}, 
//     {"유관순", 15, "444-4444", "충남 천안"}, {"안중근", 45, "555-5555", "황해도 해주"}};

//     print_list(list);

//     return 0;
// }

//17-9
// struct list {
//     int num;
//     struct list *next;
// };

// int main(void)
// {
//     struct list a = {10,0}, b = {20, 0}, c = {30, 0};
//     struct list *head = &a, *current;

//     a.next = &b;
//     b.next = &c;

//     printf("head->num: %d\n",head->num);
//     printf("head -> next -> num :%d\n", head->next->num);
//     printf("list all : ");
//     current = head;
//     while(current != NULL)
//     {
//         printf("%d ", current -> num);
//         current = current -> next;
//     }

//     printf("\n");

//     return 0;

// }

//17-10
// union student
// {
//     int num;
//     double grade;
// };

// int main(void)
// {
//     union student s1 = {315};

//     printf("%d\n", s1.num);
//     s1.grade = 4.4;
//     printf("%.1lf\n", s1.grade);
//     printf("%d\n", s1.num);

//     return 0;
// }

//17-11
// enum season {SPRING, SUMMER, FALL, WINTER};

// int main(void)
// {
//     enum season ss;
//     char *pc = NULL;

//     ss = SPRING;
//     switch (ss)
//     {
//     case SPRING:
//         pc = "inline"; break;
//     case SUMMER:
//         pc = "swimming"; break;
//     case FALL:
//         pc = "trip"; break;
//     case WINTER:
//         pc = "skiing"; break;
//     }

//     printf("나의 레저: %s\n", pc);

//     return 0;
// }

//17-12
// typedef struct student
// {
//     int num;
//     double grade;
// } Student;

// void print_data(Student *ps);

// int main(void)
// {
//     Student s1 = {315, 4.2};

//     print_data(&s1);

//     return 0;
// }

// void print_data(Student *ps)
// {
//     printf("%d\n", ps->num);
//     printf("%lf\n", ps->grade);
// }

//[17장 예제]
// struct student
// {
//     int num, kor, eng, math, total;;
//     char name[20]; 
// };

// int main(void)
// {
//     struct student s[5];
//     int i, j;

//     printf("[데이터 입력 및 정렬 전 데이터 출력]\n");
//     for (i = 0; i < 5; i++)
//     {
//         printf("학번, 이름, 국/영/수 점수 입력: ");
//         scanf("%d %19s %d %d %d", &s[i].num, s[i].name, &s[i].kor, &s[i].eng, &s[i].math);
        
//         s[i].total = s[i].kor + s[i].eng + s[i].math;

//         int aver = s[i].total / 3;
//         char grade = (aver >= 90) ? 'A' : (aver >= 80) ? 'B' : (aver >= 70) ? 'C' : 'F'; // 삼항 연산자로 간결화
        
//     }

//     for (i = 0; i < 5; i++)
//     {
//         printf("[정렬전 데이터]");
    
//         printf("%d %s %d %d %d %d %d %c\n\n", s[i].num, s[i].name, s[i].kor, s[i].eng, s[i].math, s[i].total, aver, grade);
//     }
    

//     for (i = 0; i < 4; i++)
//     {
//         for (j = i + 1; j < 5; j++)
//         {
//             if (s[i].total < s[j].total)
//             {
//                 struct student temp = s[i];
//                 s[i] = s[j];
//                 s[j] = temp;
//             }
//         }
//     }

//     printf("\n[등급순 정렬 데이터]\n");
//     for (i = 0; i < 5; i++)
//     {
//         // 출력 시점에 평균과 학점을 다시 계산해서 보여줍니다.
//         int aver = s[i].total / 3;
//         char grade = (aver >= 90) ? 'A' : (aver >= 80) ? 'B' : (aver >= 70) ? 'C' : 'F';
        
//         printf("%d   %s   %d   %d   %d    %d   %d  %c\n", s[i].num, s[i].name, s[i].kor, s[i].eng, s[i].math, s[i].total, aver, grade);
//     }

//     return 0;
// }


//buble sort??
// int main()
// {
//     int n = 7;
//     int arr[] = {9, 3, 5, 8, 4, 2, 1};

//     for(int i = 0; i < n; i++)
//     {
//         for (int j = 0; i < n-i-1; i++)
//         {
//             if (arr[j] > arr[j+1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
        
//     }
//     return 0;
// }