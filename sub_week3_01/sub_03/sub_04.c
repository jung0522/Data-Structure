/*
#include <stdio.h>
long cal(int fac)
{
	int res = 0;
	if (fac <= 1) {
		printf("fact(%d) 함수 호출!\n", fac);
		printf("fact(%d) 값 %d 반환!\n", fac, fac);
		return fac;
	}
    
	else {

		printf("fact(%d) 함수 호출!\n", fac);
		res = fac * cal(fac-1);
		printf("fact(%d) 값 %d 반환!\n", fac, res);
		return res;

	}
}

int main()
{
	int n, result;
	printf("정수를 입력하세요: ");
	scanf("%d", &n);
	printf("\n\n");
	result = cal(n);
	printf("\n\n%d의 팩토리얼 값은 %d입니다.: ",n, result);

	return 0;

}
*/
