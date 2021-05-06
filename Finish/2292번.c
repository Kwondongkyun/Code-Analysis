#include <stdio.h>
int main(void) {
	int num, i = 2, j = 7, count = 1;
	int k = 0;
	scanf_s("%d", &num);

	if (num == 1) {
		printf("%d", 1);
		return 0;
	}
	while (1) {
		if (num >= i && num <= j) {
			count++;
			printf("%d", count);
			break;
		}
		else {
			i = j + 1;
			j = j + (12 + 6 * k);
			k++;
			count++;
		}
	}
}



--> 규칙 찾기가 까다로웠지만 찾고보면 쉬운 문제이다.
