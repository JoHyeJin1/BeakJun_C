#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, i, j;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < i; j++) {
			printf(" ");
		}

		for (j = 0; j < (n - i) * 2 - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
}