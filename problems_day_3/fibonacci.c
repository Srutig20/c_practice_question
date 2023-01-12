#include<stdio.h>
void main(){
	int n1=0,n2=1,terms,i,j;
	printf("Enter the number you want to display in Fibonacci series: ");
	scanf("%d",&j);
	printf("The fibonacci series is:%d, %d, ",n1,n2 );
	for (i=3;i<=j;i++){
		terms=n1+n2;
		n1=n2;
		n2=terms;
		printf("%d, ",terms);
	}
	
}
