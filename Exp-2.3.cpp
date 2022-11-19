//Input three positive intergers£¬output the biggest one.
#include<stdio.h>
int main()
{
	printf("Input(Format: a,b,c): ") ;
	int a,b,c,d;
	scanf("%d,%d,%d",&a,&b,&c);
	if(a>b) d=a;
	else d=b;
	if(d<c) d=c;
	printf("The biggest is: %d",d);
	return 0;
}
