#include <stdio.h>
void main()
{
	char string[100];
	int i,count=0;
	printf("enter the string:");
	scanf("%s",&string);
	for(i=0;i<strlen(string);i++)
	{
		if(string[i]!=" ")
		count++;
	}
	printf("total number of character in a string:%d",count);
}
