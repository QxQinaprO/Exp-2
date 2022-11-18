//输入一个字母，如果是小写字母将其转换为对应的大写字母，否则直接输出。 
#include<stdio.h>
main()
{
	printf("请输入字母：");
    char a;
    a=getchar(); 
    if (a>='a'&&a<='z') printf("其大写字母为%c",a,a-=32);
    else printf("%c为大写字母",a);
}
