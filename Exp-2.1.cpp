//Input a positive interger, judge its odevity.
#include<stdio.h>
main()
{
	printf("Input: ");
	int a;
	scanf("%d",&a);
	if(a%2==0) printf("%d is an even number.",a);
	else printf("%d is an odd number.",a);
}
