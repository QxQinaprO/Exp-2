//输入十个正整数，统计并输出其中奇数和偶数的个数。 
#include<stdio.h>
main()
{
	printf("请输入数据（格式为a b c ...）："); 
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
	printf("奇数个数：%d，偶数个数：%d",a,b); 
} 
