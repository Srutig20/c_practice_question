#include<stdio.h>
void main(){
	int i,j,p=1;
	printf("Enter a number whose factorial is to be calculated: ");
	scanf("%d",&j);
	for (i=1;i<=j;i++)
	{
		p=p*i;
	}
	printf("The factorial of %d is %d\n.",j,p);
}

