//Input a letter,output its uppercase if its a lowercase, while its a capital letter, output itself.
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	printf("Input letter: ");
	char a;
	a = getchar();
	if (a >= 'a' && a <= 'z')
		printf("\nOutput: %c\n", a -= 32);
	else
		printf("\nOutput: %c\n", a);
	return 0;
}