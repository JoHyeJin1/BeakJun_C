#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, i, a, total = 0;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a);
		total += a;
	}
	total -= n - 1;

	printf("%d", total);
}