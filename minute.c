#include <stdio.h>

int main(void) {
	int a,b,min;
	printf("enter the minutes:");
	scanf("%d",&min);
	a=min/60;
	b=min%60;
	printf("\n timing of %d hrs %d min",a,b);
	return 0;
}
