/*
#include <stdio.h>

int main(void)
{
    int i, j, k;
    char student[2][3][20];
   

    for (int i = 0; i < 2; i++)
    {
        printf("\n 학생 %d의 이름은: ", i + 1);
            gets(student[i][0]);
        printf(" 학생 %d의 학과 : ", i + 1);
            gets(student[i][1]);
        printf(" 학생 %d의 학번: ", i + 1);
            gets(student[i][2]);
    }
    for (i = 0; i < 2; i++)
    {
        printf("\n\n학생 %d\n\t", i + 1);
        for (j = 0; j < 3; j++)
        {
            for (k = 0; student[i][j][k] != '\0'; k++)
            {
                printf("%c", student[i][j][k]);
            }
            printf("\n\t");
        }
    }
   
    return 0;
}
*/

