#include<stdio.h>
#include<conio.h>
void main()
{
int a,s,d,sum=0,i,lt;
printf("enter the first number of A.P:");
scanf("%d",&a);
printf("enter the totalnumber of A.P:");
scanf("%d",&s);
printf("enter the difference of A.P:");
scanf("%d",&d);
sum=(s*(2*a+(s-1)*d))/2;
lt=a+(s-1)*d;
printf(" %d sum of A.P series:");
for(i=a;i<=lt;i=i+d)
{
if(i!=lt)
printf("%d+",i);
else
printf("%d=%d",i,sum);
}
getch();
}

