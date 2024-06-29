#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, count = 0, i;

	for (i = 0; i < 5; i++) {
		scanf("%d", &a);
		count += a * a;
	}

	printf("%d", count % 10);
}