#include <stdio.h>
int main(void)
{
	char a[100];
	while (fgets(a, sizeof(a), stdin)) {
		printf("%s", a);
	}
}
