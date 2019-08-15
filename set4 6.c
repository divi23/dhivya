#include <stdio.h>
int main()
{
char str[100];	
int  i,alph,digit,special;
i=alph=digit=special=0;
printf("enter the string:");
gets(str);
while (str[i] !='\0')
{
if((str[i]>='a' && str[i]<='z') ||(str[i]>='A'&& str[i]<='Z'))    	
{
alph++;	    
 }
else if(str[i]>='0'&& str[i]<='9')    
 {
digit++;     	
}
else
special++;
i++;
}
printf("print the total number of special character:%d",special);
return 0;
}
