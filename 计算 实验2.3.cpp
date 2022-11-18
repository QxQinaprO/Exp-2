//输入三个正整数，输出其中最大的数。 
#include<stdio.h>
main()
{
	printf("请输入数据（格式为a,b,c）：") ;
	int a,b,c,d;
	scanf("%d,%d,%d",&a,&b,&c);
	if(a>b) d=a;
	else d=b;
	if(d<c) d=c;
	printf("最大的数为：%d",d);
}
