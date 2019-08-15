#include <stdio.h>
void main()
{
 char s[100];
 int c=0,i;
 printf("enter the string:");
 gets(s);
 for(i=0;s[i]!='\0';i++)
 {
 	if(s[i]>='0' && s[i]<='9')
 	c++;
 }
 printf("number of digits in string:%d",c);
}
