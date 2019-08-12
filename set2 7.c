#include <stdio.h>

void main()
{
	int n,original,remainder,result=0;
	printf("enter the number:");
	scanf("%d",&n);
	original=n;
	while(original!=0)
	{
		remainder=original%10;
		result+=remainder*remainder*remainder;
		original/=10;
	
	}
	if(result==n)
	printf("%d is armstrong number",n);
	else
	printf("%d is not armstrong number",n);
}

