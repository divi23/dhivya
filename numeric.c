#include <stdio.h>
void main(){
	char s[100];
	int i,flag=0;
	printf("enter the string:");
	scanf("%s",&s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='0'&&s[i]<='9')
		{}
		else
		{
			flag++;
		}
	}
	if(flag>=1){
	printf("no");}
	else{
	printf("yes");
	}
}
