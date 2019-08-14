#include <stdio.h>
#include<conio.h>
void main()
{	
int array[50],maximum,size,c,location=1;	
printf("enter the number of elements in array\n");	
scanf("%d",&size);	
printf("enter %d of integers:",size);	
for(c=0;c<size;c++)	
scanf("%d",&array[c]);
maximum=array[0];
for(c=1;c<size;c++)
{
if(array[c]>maximum)
{
maximum=array[c];
location=c+1;
}
}
printf("maximum element present in the location%d and its value%d",location,maximum);
getch();
}

