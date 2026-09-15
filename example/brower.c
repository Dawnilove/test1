#include <stdio.h>
#include <string.h>


int main()
{


    FILE *fp = fopen("ping.txt", "r");

    if (fp == NULL)
    {
        printf("파일을 찾을 수 없습니다.\n");
        return 1;
    }

     while (fgets(line, sizeof(line), fp))
    {

    }


    return 0;
}