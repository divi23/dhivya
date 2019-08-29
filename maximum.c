#include <stdio.h>

int main(void) {
	int n,i,a[100],max;
	printf("enter the number:");
	scanf("%d",&n);
	printf("the elements are:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	a[0]=max;
	for(i=0;i<n;i++)
	if(a[i]>max)
	{
		max=a[i];
	}
	printf("%d",max);
	return 0;
}
