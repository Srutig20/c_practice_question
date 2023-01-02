#include<stdio.h>
void main(){
	int l,b,a,p;
	printf("Enter the length of the rectangle:\n");
	scanf("%d",&l);
	printf("Enter the breadth of the rectangle:\n");
	scanf("%d",&b);
	a= l*b;
	p=2*(l+b);
	if (a>p)
		printf("Area of rectangle is %d more than the perimeter %d.",a,p);
	else
		printf("Area of rectangle is %d less than the perimeter %d.",a,p);
}
	
	
	
