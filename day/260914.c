#include <stdio.h>
#include <string.h>

//18-1
// int main(void)
// {
//     FILE *fp;
//     fp = fopen("a.txt", "r");
//     if (fp == NULL)
//     {
//         printf("파일 오픈 안됨\n");
//         return 0;
//     }

//     printf("파일 오픈");
//     fclose(fp);

//     return 0;

// }

//18-2
// int main(void)
// {
//     FILE *fp;
//     int ch;

//     fp = fopen("a.txt", "r");

//     if(fp == NULL)
//     {
//         printf("파일 오픈 안됨\n");
//         return 1;
//     }
//     while (1)
//     {
//         ch = getc(fp);
//         if (ch ==EOF)
//         {
//             break;
//         }
//         putchar(ch);
//     }
//     fclose(fp);

//     return 0;
// }

//18-3
// int main(void)
// {
//     FILE *fp;
//     char str[] = "banana";
//     int i;

//     fp = fopen("b.txt", "w");
//     if (fp == NULL);
//     {
//         printf("파일 오픈 실패\n");
//         return 1;
//     }

//     i= 0;
//     while (str[i] != '\0')
//     {
//         fputc(str[i], fp);
//         i++;
//     }
//     fputc('\n', fp);
//     fclose(fp);

//     return 0;
// }

//18-4
// int main(void)
// {
//     int ch;
//     while (1)
//     {
//         ch = getchar();
//         if (ch == EOF)
//         {
//             break;
//         }

//         putchar(ch);
//     }
    
//     return 0;
// }

//18-5
// int main(void)
// {
//     int ch;
//     while (1)
//     {
//         ch = fgetc(stdin);
//         if (ch == EOF)
//         {
//             break;
//         }

//         fputc(ch,stdout);
//     }
    
//     return 0;
// }

//18-6
// int main(void)
// {
//     FILE *fp;
//     int ary[10] = {13,10,13,13,10,26,13,10,26,13,10,13,10};
//     int i,res;

//     fp = fopen("a.txt", "wb");
//     for (i = 0; i < 10; i++)
//     {
//         fputc(ary[i],fp);
//     }
//     fclose(fp);

//     fp = fopen("a.txt", "rt");
//     while (1)
//     {
//         res = fgetc(fp);
//         if (res == EOF) break;
//         printf("%4d", res);
//     }
//     fclose(fp);

//     return 0;
// }

//18-7
// int main(void)
// {   
//     FILE *fp;
//     char str[20];

//     fp = fopen("a.txt", "a+");
//     if (fp == NULL)
//     {
//         printf("파일을 만들지 못함\n");
//         return 1;
//     }

//     while(1)
//     {
//         printf("과일 이름: ");
//         scanf("%s", str);
//         if (strcmp(str, "end") == 0)
//         {
//             break;
//         }
//         else if (strcmp(str, "list") == 0)  
//         {
//             fseek(fp, 0, SEEK_SET);
//             while (1)
//             {
//                 fgets(str, sizeof(str), fp);
//                 if (feof(fp))
//                 {
//                     break;
//                 }
//                 printf("%s", str);
//             }
//         }
//         else
//         {
//             fprintf(fp, "%s\n", str);
//         } 
//     }
//     fclose(fp);
//     return 0;
// }

//18-8
// int main(void)
// {
//     FILE *ifp, *ofp;
//     char str[80];
//     char *res;

//     ifp = fopen("a.txt", "r");
//     if (ifp = NULL)
//     {
//         printf("입력 파일 열지 못했습니다\n");
//         return 1;
//     }
//     ofp = fopen("b.txt", "w");
//     if (ofp ==NULL)
//     {
//         printf("출력 파일을 열지 못했습니다.\n");
//         return 1;
//     }
//     while (1)
//     {
//         res = fgets(str, sizeof(str), ifp);
//         if (res == NULL)
//         {
//             break;
//         }
//         str[strlen(str) -1] = '\0';
//         fputs(str, ofp);
//         fputs(" ", ofp);
//     }

//     fclose(ifp);
//     fclose(ofp);

//     return 0;
// }