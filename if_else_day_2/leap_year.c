#include<stdio.h>
void main(){
	int y;
	printf("Enter the year you want to check: \n");
	scanf("%d",&y);
	if(y%4==0 && y%100!=0 || y%400==0 ){
		printf("The year %d is a leap year:",y);
	}
	else{
		printf("The year %d is a non-leap year:",y);
	}
}
