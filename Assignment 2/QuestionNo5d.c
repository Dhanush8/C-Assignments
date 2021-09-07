#include<stdio.h>

void main(){

	int a,b,c,n;
	printf("Enter the Number of Rows: ");
	scanf("%d",&n);
	printf("\n");

	for(a=0;a<n;a++)
	{
		for(b=n;b>a;b--)
		{
			printf(" ");
		}
		for(c=n;c>0;c--)
		{
			printf("*");
		}
		
		printf("\n");
	}
}