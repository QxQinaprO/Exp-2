//����һ����ĸ�������Сд��ĸ����ת��Ϊ��Ӧ�Ĵ�д��ĸ������ֱ������� 
#include<stdio.h>
main()
{
	printf("��������ĸ��");
    char a;
    a=getchar(); 
    if (a>='a'&&a<='z') printf("���д��ĸΪ%c",a,a-=32);
    else printf("%cΪ��д��ĸ",a);
}
