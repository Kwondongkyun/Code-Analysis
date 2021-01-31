#include <stdio.h>
int main(void)
{
	int a[1000];
	int b, i, j, count = 0, result = 0;
	scanf_s("%d", &b);

	for (i = 0; i < b; i++) {
		scanf_s("%d", &a[i]);
	}
	for (i = 0; i < b; i++) {
		for (j = 1; j <= a[i]; j++) {
			if (a[i] % j == 0) {
				count++;
			}
		}
		if (count == 2)
			result++;
		count = 0;
	}
	printf("%d\n", result);
}


// 소수' 약수 : 1 & 자기자신 -> count : 2 이용
