#include <stdio.h>
int main(void)
{
	int N, i, j, tmp;
	int a[1000] = { 0 };
	scanf_s("%d", &N);

	for (i = 0; i < N; i++) {
		scanf_s("%d", &a[i]);
	}
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			if (a[j] > a[i]) {
				tmp = a[j];
				a[j] = a[i];
				a[i] = tmp;
			}
		}
	}
	for (i = 0; i < N; i++)
		printf("%d\n", a[i]);
}


// 정렬 알고리즘 다시 공부하기
