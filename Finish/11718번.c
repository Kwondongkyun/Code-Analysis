#include <stdio.h>
int main(void)
{
	char a[100];
	while (fgets(a, sizeof(a), stdin)) {                // EOF활용
		printf("%s", a);
	}
}
