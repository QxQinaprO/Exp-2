//����ʮ����������ͳ�Ʋ��������������ż���ĸ����� 
#include<stdio.h>
main()
{
	printf("���������ݣ���ʽΪa b c ...����"); 
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
	printf("����������%d��ż��������%d",a,b); 
} 
