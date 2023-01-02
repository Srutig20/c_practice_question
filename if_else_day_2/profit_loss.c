#include<stdio.h>
void main(){
	float c,s,p,l;
	printf("Enter the cost price of an item:\n");
	scanf("%f",&c);
	printf("Enter the selling price of an item:\n");
	scanf("%f",&s);
	
	if(s>c){
		p=s-c;
		printf("The seller has made a profit of %f.", p);
	}
	else{
		l=c-s;
		printf("The seller had a loss of %f.", l);
	}
}
	
