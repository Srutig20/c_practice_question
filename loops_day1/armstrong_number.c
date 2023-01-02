#include<stdio.h>
void main(){
	int i,n,num,r,sum=0;
	printf("Enter a number: ");
	scanf("%d",&num);
	printf("Armstrong numbers are:\n");
	for (i=0;i<=num;i++)
	{
		sum=0;
		n=i;
		while (n!=0){
			r=n%10;
			sum= sum +(r*r*r);
			n=n/10;
		}
		if (i==sum){
			printf("%d , ",i);
		}
	}
}
