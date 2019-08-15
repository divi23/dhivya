#include <stdio.h>
void main()
{
	int i,count=0;
	char str[100];
	printf("enter the string:");
	gets(str);
	for(i=0;str[i];i++)
	{
		if(str[i]==' ')
		{
	     	count++;
		}
	}
	printf("total blank spaces in a string:%d",count);
}
