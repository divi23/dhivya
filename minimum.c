#include <stdio.h>
void main()
{
	int array[50],minimum,size,c,location=1;
	printf("enter the number of elements in array\n");
	scanf("%d",&size);
	printf("enter %d of integers:",size);
	for(c=0;c<size;c++)
	scanf("%d",&array[c]);
	minimum=array[0];
	for(c=1;c<size;c++)
	{
		if(array[c]<minimum)
		{
			minimum=array[c];
			location=c+1;
		}
	}
	printf("minimum element present in the location%d and its value%d",location,minimum);

}

