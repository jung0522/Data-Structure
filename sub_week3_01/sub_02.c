#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];

    printf("문자열을 입력하세요 : ");
   // scanf_s("%99[^\n]", str, sizeof(str));
    gets(str);
    printf("입력된 문자열의 길이 : %d\n", strlen(str));

    int length = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        length += 1;
    }

    printf("입력된 문자열은\n\"%s\"\n입니다.\n", str);
    printf("입력된 문자열의 길이 : %d\n", length);

    return 0;
}