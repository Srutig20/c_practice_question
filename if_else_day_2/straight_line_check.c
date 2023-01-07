#include<stdio.h>
void main()
{
	int x1,x2,x3,y1,y2,y3;
	float m,n;
	printf("Enter the first coordinates: \n");
	scanf("%d %d",&x1,&y1);
	printf("Enter the second coordinates: \n");
	scanf("%d %d",&x2,&y2);
	printf("Enter the third coordinates: \n");
	scanf("%d %d",&x3,&y3);
	
	m=(y2-y1)/(x2-x1);
	n=(y3-y2)/(x3-x2);
	
	if(m==n){
		printf("All points (%d,%d), (%d,%d), (%d,%d) lie on a straight line.\n",x1,y1,x2,y2,x3,y3);
	}
	else 
		printf("All points (%d,%d), (%d,%d), (%d,%d) do not lie on a straight line.\n",x1,y1,x2,y2,x3,y3);
}
