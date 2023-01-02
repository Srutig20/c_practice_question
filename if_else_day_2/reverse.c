#include<stdio.h>
void main(){
	int n, rev=0, rem;
	printf("Enter an integer: ");
	scanf("%d",&n);
	while (n!=0){
		rem = n%10;
		rev = rev*10+rem;
		n=n/10;
	}
	printf("Reversed number = %d\n", rev);
	if(n==rev)
		printf("Numbers are equal.\n");
	else
		printf("Numbers are not equal.\n");
}
	
