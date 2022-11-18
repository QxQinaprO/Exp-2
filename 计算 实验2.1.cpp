//输入一个正整数，判断其奇偶性。 
#include<stdio.h>
main()
{
	printf("请输入数据：");
	int a;
	scanf("%d",&a);
	if(a%2==0) printf("%d为偶数",a);
	else printf("%d为奇数",a);
}
