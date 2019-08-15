#include <stdio.h>
void main()
{
	int a[50],i,j,n,tmp;
	printf("array size:");
	scanf("%d",&n);
	printf("print the element:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{	for(j=0;j<n;j++)

	{
			if(a[j]>a[i])
			{
			tmp=a[i];
			a[i]=a[j];
			a[j]=tmp;
}
}
}
printf("\n ascending order:");
for(i=0;i<n;i++)
{
	printf("%d\t",a[i]);
	
}

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[j]<a[i])
			{
			tmp=a[i];
			a[i]=a[j];
			a[j]=tmp;
			
		}
	}
}
printf("\ndescending order:");
for(i=0;i<n;i++)
{
	printf("%d\t",a[i]);
}
}
