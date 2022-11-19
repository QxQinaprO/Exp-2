//Calculate 1-3+5-...-99.
#include <stdio.h>
int main()
{
	int a,b,c,d;
	b=1;
	c=1;
	d=0;
	for(a=1;a<=99;a=a+2)
	{
		d=d+a*c;
		b++;
		if(b%2==0) c=-1;
		else c=1;
	}
	printf("The answer is: %d",d);
	return 0;
} 
