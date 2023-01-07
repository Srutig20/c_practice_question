#include<stdio.h>
void main(){
	int x,y;
	printf("Enter the coordinates you want to check: \n");
	scanf("%d %d",&x,&y);
	if (x==0 && y==0)
		printf("The point (%d, %d) lies on origin.\n",x,y);
		
	else if (x==0 && y!=0)
		printf("The point (%d, %d) lies on y-axis.\n",x,y);
	else if (x!=0 && y==0)
		printf("The point (%d, %d) lies on x-axis.\n",x,y);
	else
		printf("The point (%d, %d) do not lies on x-axis, y-axis, origin.\n",x,y);
}
