#include <stdio.h> 
#include <string.h> 
int main(void) 
{ 
	int i, j, max, result = 0;
	char a[1000000];
	int b[26] = { 0 };
	int select = 0; 
	scanf_s("%s", &a, sizeof(a));

	for(i = 'a'; i <= 'z'; i++) { 
		for(j = 0; j < strlen(a); j++) {
			if (a[j] == i)
				b[i-'a']++; 
		} 
	} 
	for(i = 'A'; i <= 'Z'; i++) { 
		for(j = 0; j < strlen(a); j++) {
			if (a[j] == i)
				b[i-'A']++; 
		} 
	} 
	max = b[0]; 
	for(i = 1; i < 26; i++) 
	{ 
		if(max < b[i]) { 
			max = b[i]; 
			select = i; 
		} 
	} 
	for(i = 0; i < 26; i++) { 
		if(max == b[i]) 
			result++; 
	} 
	if(result > 1) 
		printf("?\n"); 
	else 
		printf("%c", select+'A'); 
}



1. 문자열 입력
2. 입력받은 문자열을 소문자, 대문자 따로 처리
3. 많이 나온 알파벳 변수 설정
4. max 값 동일 O -> ?

// 내 방식으로 다시 구현하기
