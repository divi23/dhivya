#include <stdio.h>

int main(void) {
	int n,i,a[100];
	printf("enter the element:");
	scanf("%d",&n);
	printf("elements are:");
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	printf("\n %d %d",i,a[i]);
	}
	
	return 0;
}
