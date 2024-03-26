#include <stdio.h>

int main(void)
{
    char student[2][3][20];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            switch (j)
            {
            case 0:
                printf("학생 %d의 이름 : ", i + 1);
                gets_s(student[i][j]);
                break;
            case 1:
                printf("학생 %d의 학과 : ", i + 1);
                gets_s(student[i][j]);
                break;
            default:
                printf("학생 %d의 학번 : ", i + 1);
                gets_s(student[i][j]);
                break;
            }
        }
    }

    printf("\n\n");

    for (int i = 0; i < 2; i++)
    {
        printf("학생 %d\n", i + 1);
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; student[i][j][k] != '\0'; k++)
            {
                printf("%c", student[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    getchar();

    return 0;
}