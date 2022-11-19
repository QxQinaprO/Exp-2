//Input a letter,output its uppercase if its a lowercase, while its a capital letter, output itself.
#include<stdio.h>
main()
{
	printf("Input: ");
    char a;
    a=getchar(); 
    if (a>='a'&&a<='z') printf("Its uppercase is %c",a-=32);
    else printf("%c is a capital letter.",a);
}
