#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char s[100];
	int i;

	scanf("%s", s);
	for (i = 0; s[i] != '\0'; i++) {
		if (isupper(s[i])) {
			printf("%c", tolower(s[i]));
		}
		else {
			printf("%c", toupper(s[i]));
		}
	}
}