//������������������������������� 
#include<stdio.h>
main()
{
	printf("���������ݣ���ʽΪa,b,c����") ;
	int a,b,c,d;
	scanf("%d,%d,%d",&a,&b,&c);
	if(a>b) d=a;
	else d=b;
	if(d<c) d=c;
	printf("������Ϊ��%d",d);
}
