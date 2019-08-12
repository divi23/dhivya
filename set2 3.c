#include <stdio.h>

void main()
{
	int n,i,flag=0;
	printf("enter the positive integer:");
	scanf("%d",&n);
	for(i=2;i<=n/2;++i)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(n==1)
	{
		printf("1 is neither prime nor composite number");
		
	}
	else{
		if(flag==0)
		printf("%d is prime number",n);
		else
		printf("%d is not prime number",n);
	}
}

