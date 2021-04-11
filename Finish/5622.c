#include <stdio.h>
#include <string.h>
int main(void) {
	char a[16];
	unsigned int time = 0, sum = 0, i;
	fgets(a, sizeof(a), stdin);

	for (i = 0; i < strlen(a); i++) {
		
		switch (a[i]) {
		
		case 'A': case 'B': case 'C': time = 3; sum += time; break;
		case 'D': case 'E': case 'F': time = 4;	sum += time; break;
		case 'G': case 'H': case 'I': time = 5; sum += time; break;
		case 'J': case 'K': case 'L': time = 6; sum += time; break;
		case 'M': case 'N': case 'O': time = 7; sum += time; break;
		case 'P': case 'Q': case 'R': case 'S': time = 8; sum += time; break;
		case 'T': case 'U': case 'V': time = 9; sum += time; break;
		case 'W': case 'X': case 'Y': case 'Z': time = 10; sum += time; break;
		default: time = 0; sum += time; break;
		}
	}
	printf("%d", sum);

	return 0;
}
