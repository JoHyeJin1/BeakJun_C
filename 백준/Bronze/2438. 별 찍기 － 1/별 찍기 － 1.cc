#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, i, j;

	scanf("%d", &a);
	
	for (i = 0; i < a; i++) {
		for (j = a - i - 1; j < a; j++)
			printf("*");
		printf("\n");
	}
}