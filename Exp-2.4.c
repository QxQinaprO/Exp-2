//Input ten positive integers,count and output the number of odd and even numbers.
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	printf("Input numbers(Format: a b c ...): ");
	int arr[10], odd = 0, eve = 0, rec, jud;
	for (rec = 0; rec < 10; rec++)
	{
		scanf("%d", &arr[rec]);
		jud = arr[rec] % 2;
		if (jud == 0)
			eve++;
		else
			odd++;
	}
	printf("\nNumber of odd numbers: %d   Number of even numbers: %d\n", odd, eve);
	return 0;
}