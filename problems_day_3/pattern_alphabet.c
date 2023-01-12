#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,j,k,n;
	printf("Enter the number of rows:");
	scanf("%d",&n);
	for(i=1; i<=n;i++)
	{
		for(k=n-1;k>=i;k--)
		{
			printf(" ");
		}
		
		for(j=i-1;j>=-(i-1);j--)
		{
			printf("%c",i-abs(j)+64);
		}
		
		printf("\n");
	}
	
	
}
