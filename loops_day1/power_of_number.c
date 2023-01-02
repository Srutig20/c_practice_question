#include<stdio.h>
#include<math.h>
void main(){
	int i,j,n,b,p;
	printf("Enter the first number or the base: ");
	scanf("%d",&b);
	printf("Enter the second number or the power: ");
	scanf("%d",&p);
	n= pow(b,p);
	printf("The answer is: %d\n",n);
}
