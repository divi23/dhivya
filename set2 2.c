#include <stdio.h>
void main()
{
	int n,r=0,rem,original;
	printf("enter the number:");
	scanf("%d",&n);
	original=n;
	while(n!=0)
	{
		rem=n%10;
		r=r*10+rem;
		n/=10;
	}
	if(original==r)
	printf("%d is palindrome",original);
	else
	printf("%d is not a palindrome",original);
	return 0;
}


