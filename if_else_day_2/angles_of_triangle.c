#include<stdio.h>
void main(){
	int a,b,c,sum=0;
	printf("Enter the three angles of a traingle:\n");
	scanf("%d%d%d",&a,&b,&c);
	sum= a+b+c;
	if (sum == 180)
		printf("The triangle is valid.");
	else 
		printf("The triangle is not valid.");
}
