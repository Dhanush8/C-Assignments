#include<stdio.h>

void main(){

	int a,b,n;
	printf("Enter the Number of Rows: ");
	scanf("%d",&n);
	printf("\n");

	for(a=0;a<n;a++)
	{
		for(b=n-a;b>=1;b--)
		{
			printf("*");
		}
		
		printf("\n");
	}
	
}