
#include <stdio.h>

int main()
{
	

	char *address1[4] = { "Korea", "Seoul", "Mapo", "152번지 2 / 3" };
	char* address2[4] = { "Korea", "Seoul", "Jongno", "152번지 2 / 3" };

	for (int i = 0; i <= 3; i++)
	{
		printf("%s\n", address1[i]);
	}
	printf("\n\n");
	for (int j = 0; j <= 3; j++)
	{
		printf("%s\n", address2[j]);
	}

	return 0;
}

