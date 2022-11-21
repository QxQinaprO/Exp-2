//Input several real numbers, output the biggest and the smallest.
#define _CRT_SECURE_NO_WARNINGS 1
#define MAX(a,b) a > b ? a : b
#define MIN(c,d) c > d ? d : c
#define N 100
#include <stdio.h>

int main()
{
	printf("Input numbers(Format: a b c ... 0): ");
	float arr[N], max, min;
	int i, n = 0;
	scanf("%f", &arr[0]);
	while (arr[n] != 0.0)
	{
		n++;
		scanf("%f", &arr[n]);
	}
	max = min = arr[0];
	for (i = 1; i < n; i++)
	{
		max = MAX(max, arr[i]);
		min = MIN(min, arr[i]);
	}
	printf("\nThe biggest: %f   The smallest: %f\n", max, min);
	return 0;
}