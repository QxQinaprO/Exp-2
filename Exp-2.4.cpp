//Input ten positive integers,count and output the number of odd and even numbers.
#include<stdio.h>
main()
{
	printf("Input(Format: a b c ...): "); 
	int e[10];
	int a,b,c,d;
	a=b=0;
	for(c=0;c<10;c++)
	{
		scanf("%d",&e[c]);
		d=e[c]%2;
		if(d==0) b++;
		if(d!=0) a++;
	}
	printf("Number of odd numbers: %d   Number of even numbers: %d",a,b); 
} 
