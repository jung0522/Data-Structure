
#include <stdio.h>
long Hanoi(int n, char start, char mid, char end)
{
	if (n == 1) 
	{
		printf("%c에서 원반 %d를(을) %c로 옮김\n", start, n, end);
	}
	else {
		Hanoi(n - 1, start, end, mid);
		printf("%c에서 원반 %d를(을) %c로 옮김\n", start, n, end);
		Hanoi(n - 1, mid, start, end);

	}
}
int main() {
	
	Hanoi(3, 'A', 'B', 'C');             

	return 0;
}
