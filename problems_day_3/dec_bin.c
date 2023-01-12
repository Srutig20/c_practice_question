#include<stdio.h>
void main(){
	int dec,bin,rem,i=1;
	printf("Enter a decimal number: ");
	scanf("%d",&dec);
	while (dec != 0){
		rem = dec%2;
		bin = bin +rem*i;
		i=i*10;
		dec = dec/2;
		
	}
	printf(" The binary number is: %d ",bin);
}
		
