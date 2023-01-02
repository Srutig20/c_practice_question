#include<stdio.h>
void main(){
	int a1,a2,a3;
	printf("Enter the age of Ram:\n");
	scanf("%d",&a1);
	printf("Enter the age of Shyam:\n");
	scanf("%d",&a2);
	printf("Enter the age of Ajay:\n");
	scanf("%d",&a3);
	if (a1<a2 && a1<a3)
		printf("Ram is the youngest of all three.");
	if (a2<a1 && a2<a3)
		printf("Shyam is the youngest of all three.");
	else 
		printf("Ajay is the youngest of all three.");
}
