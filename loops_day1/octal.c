#include<stdio.h>
#include<math.h>
void main() {

	int dec, oct_eq=0,rem,i=0;

	printf("Enter a decimal number: ");
	scanf("%d", &dec);
	if (dec<8)
		oct_eq=dec;
	else 
		while (dec != 0) {
        		rem= dec%8;
        		dec = dec/8;
        		oct_eq= oct_eq+rem*(pow(10,i));
        		i++;
        	}	
    	printf("\n The octal equivalent of the number is  %d .\n", oct_eq);

}
