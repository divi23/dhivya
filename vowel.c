#include <stdio.h>

void main()
{
	char ch;
	printf("enter the character:");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	printf("%c is vowel");
	else
	printf("%c is constonant");

}
