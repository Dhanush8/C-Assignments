#include<stdio.h>

void main(){

	int a,b,c,n;
	printf("Enter the Number of Rows: ");
	scanf("%d",&n);
	printf("\n");

	for(a=0;a<n;a++)
	{
		for(c=a;c>0;c--)
		{
			printf(" ");
		}
		for(b=n-a;b>=1;b--)
		{	
			printf("*");
		}
		
		printf("\n");
	}
}