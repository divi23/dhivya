#include <stdio.h>
void main()
{
	int f1,f2,rem,i;
	printf("enter the first number:");
	scanf("%d",&f1);
	printf("enter the second number:");
	scanf("%d",&f2);
	printf("even number between %d and %d are",f1,f2);
	for(i=f1;i<=f2;i++)
	{
		rem=i%2;
		if(rem==0)
		printf("%d\n",i);
		
	}
	return 0;
}
