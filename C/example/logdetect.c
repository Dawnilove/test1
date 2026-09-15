//[로그 파일 분석!!]- 어려워요!!
#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *fp;
    char line[256];
    char error_type[10][256];
    int error_type_count = 0;
    int error_count = 0;
    char warning_type[10][256];
    int warning_type_count = 0;
    int warning_count = 0;

    fp = fopen("log.txt", "r");
    if (fp == NULL)
    {
        printf("로그 파일을 열지 못했습니다.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), fp) != NULL)
    {
        if (strstr(line, "ERROR") != NULL)
        {
            error_count++;

            int duplicate = 0;
            for (int i = 0; i < error_type_count; i++)
            {
                if (strcmp(error_type[i], line) == 0)
                {
                    duplicate = 1;
                    break;
                }
            }

            if (!duplicate && error_type_count < 10)
            {
                strcpy(error_type[error_type_count], line);
                error_type_count++;
            }
        }

        if (strstr(line, "WARNING") != NULL)
        {
            warning_count++;

            int duplicate = 0;
            for (int i = 0; i < warning_type_count; i++)
            {
                if (strcmp(warning_type[i], line) == 0)
                {
                    duplicate = 1;
                    break;
                }
            }

            if (!duplicate && warning_type_count < 10)
            {
                strcpy(warning_type[warning_type_count], line);
                warning_type_count++;
            }
        }
    }
    fclose(fp);

    printf("\n[최종 분석 결과]\n");
    printf("\n  총 에러 횟수: %d번\n", error_count);
    for (int i = 0; i < error_type_count; i++)
    {
        printf("- %s", error_type[i]);
    }

    printf("\n  총 경고 횟수: %d번\n", warning_count);

    for (int i = 0; i < warning_type_count; i++)
    {
        printf("- %s", warning_type[i]);
    }

    return 0;
}