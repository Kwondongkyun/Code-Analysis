#include <stdio.h>
int main(void)
{
	int a, b;
	scanf_s("%d %d", &a, &b);

	a = a / 100 + (a / 10 % 10 * 10) + (a % 10 * 100);
	b = b / 100 + (b / 10 % 10 * 10) + (b % 10 * 100);

	if (a > b)	printf("%d", a);
	else printf("%d", b);
}


// 다르게도 풀어보기 (너무 단순하게 품)
