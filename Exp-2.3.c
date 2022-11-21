//Input three real numbers£¬output the biggest one.
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	printf("Input numbers(Format: a b c): ");
	float a, b, c, max;
	scanf("%f %f %f", &a, &b, &c);
	max = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;
	printf("\nThe biggest: %f\n", max);
	return 0;
}