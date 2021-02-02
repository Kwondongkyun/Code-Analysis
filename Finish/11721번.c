#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[100];
	char* p = a;
	int i;
	fgets(a, sizeof(a), stdin);

	for (i = 0; i < strlen(a); i++) {
		if (i % 10 == 0 && i != 0)
			printf("\n%c", p[i]);
		else
			printf("%c", p[i]);
	}
}
