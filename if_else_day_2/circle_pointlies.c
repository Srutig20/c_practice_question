#include<stdio.h>
#include<math.h>
void main(){
	int r,x,y,h,k,d;
	printf("Enter the coordinates of center of circle: \n");
	scanf("%d %d",&x,&y);
	printf("Enter the radius of the circle: \n");
	scanf("%d",&r);
	printf("Enter the coordinates of the point you want to check:\n");
	scanf("%d %d",&h,&k);
	d= sqrt(pow((x-h),2)+pow((y-k),2));
	if (d==r)
		printf("The point (%d,%d) lies on the circle.\n",h,k);
	else if (d<r)
		printf("The point (%d,%d) lies inside the circle.\n",h,k);
	else 
		printf("The point (%d,%d) lies outside the circle.\n",h,k);
}
