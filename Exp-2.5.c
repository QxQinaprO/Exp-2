//Calculate 1-3+5-...-99.
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int rec, jud = 1, sig = 1, ans = 0;
	for (rec = 1; rec <= 99; rec = rec + 2)
	{
		ans = ans + sig * rec;
		jud++;
		if (jud % 2 == 0)
			sig = -1;
		else
			sig = 1;
	}
	printf("\nResult: %d\n", ans);
	return 0;
}