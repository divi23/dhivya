#include<stdio.h>
void main()
{
	int i,n;
	float median,a[n];
	printf("enter the number of element:");
	scanf("%d",&n);
	printf("enter %d of an element",n);
	for(i=0;i<n;i++)
	scanf("%f\n",&a[i]);
	if(n%2==0)
	median=(a[(n/2)-1]+a[(n/2)])/2;
	else
	median=a[(n/2)];
	for(i=0;i<n;i++)
	printf("%f\t",a[i]);
	printf("median is %f\n",median);
}
