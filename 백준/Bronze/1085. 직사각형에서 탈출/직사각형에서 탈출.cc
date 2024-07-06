#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int x, y, w, h;
	int a, b, min;

	scanf("%d%d%d%d", &x, &y, &w, &h);
	a = h - y;
	b = w - x;

	if (a < b)
		min = a;
	else
		min = b;

	if (min > x)
		min = x;

	if (min > y)
		min = y;

	printf("%d", min);
}