//Input three positive intergers, rank them from the smallest to the biggest.
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	printf("Input numbers(Format: a b c): ");
	int a, b, c, tra;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b)
	{
		tra = a;
		a = b;
		b = tra;
	}
	if (a > c)
	{
		tra = a;
		a = c;
		c = tra;
	}
	if (b > c)
	{
		tra = b;
		b = c;
		c = tra;
	}
	printf("\nSequence: %d %d %d\n", a, b, c);
	return 0;
}