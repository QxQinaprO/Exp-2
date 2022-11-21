//Input a positive interger, judge its odevity.
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	printf("Input number: ");
	int a;
	scanf("%d", &a);
	if (a % 2 == 0)
		printf("\n%d is an even number.\n", a);
	else
		printf("\n%d is an odd number.\n", a);
	return 0;
}