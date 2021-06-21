#include <stdio.h>
#include <math.h>
int main(void) {
	int A, B, V;
	int day;

	scanf_s("%d %d %d", &A, &B, &V);
	day = (V - B - 1) / (A - B) + 1;

	printf("%d", day);

	return 0;
}



// 공식을 만들어서 풀어야 함
// 반복문 사용 -> 시간초과
