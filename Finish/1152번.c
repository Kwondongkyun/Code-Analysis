#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[1000001];
	char* p = str;
	int count = 0, i;

	fgets(str, sizeof(str), stdin);
	for (i = 0; i < strlen(str); i++) {
		if (p[i] == ' ' && p[i + 1] != ' ' && p[i + 1] != '\n')
			count++;
		if (p[0] == ' ')
			count--;
		if (p[strlen(str) - 1] == ' ')
			count--;
	}
	printf("%d\n", count + 1);
}


1. 빈칸 수 먼저 세기
2. 맨 앞, 맨 뒤, 단어 중간 겹친 빈칸 제외
3. 빈칸 수 + 1 = 단어 수
