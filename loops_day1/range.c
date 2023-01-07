#include<stdio.h>
void main(){
	int set, num, max, min, range;
	printf("How many numbers do you want to enter in the set?:  ");
	scanf("%d",&set);
	printf("Enter the number: ");
	scanf("%d",&num);
	max=min=num;
	for(int i=1;i<set;i++){
		printf("Enter the number: ");
		scanf("%d",&num);
		if(num>max)
			max=num;
		if(num<min)
			min=num;
	}
	range= max-min;
	if (range<0)
		range= (-1)*range;
	printf("The maximum number is :  %d\n",max);
	printf("The minimum number is :  %d\n",min);
	printf("The range is : %d\n",range);
}
