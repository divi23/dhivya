#include <stdio.h>
void main()
{
	int d;
	printf("enter the value:");
	scanf("%d",&d);
	if(d%4==0)
	printf("%d is leapyear",d);
	else
	printf("%d is not leapyear",d);
}
