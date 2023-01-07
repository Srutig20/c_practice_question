#include<stdio.h>
void main()
{
	int year, n, day=0;
	printf("Enter the year:\n");
	scanf("%d",&year);
	for (n=1;n<year;n++){
		if (n%4==0)
			day+=366;
		else
			day+=365;
	}
	day%=7;
	if (day==1)
		printf("Monday is on 01/01/%d\n",year);
	else if (day==2)
		printf("Tuesday is on 01/01/%d\n",year);
	else if (day==3)
		printf("Wednesday is on 01/01/%d\n",year);
	else if (day==4)
		printf("Thursday is on 01/01/%d\n",year);
	else if (day==5)
		printf("Friday is on 01/01/%d\n",year);
	else if (day==6)
		printf("Saturday is on 01/01/%d\n",year);
	else
		printf("Sunday is on 01/01/%d\n",year);
		
	
}
