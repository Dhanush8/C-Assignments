#include<stdio.h>

void main(){

	int a,b,c,n;
	printf("Enter the Number of Rows: ");
	scanf("%d",&n);
	printf("\n");

	for(a=1;a<=n;a++)
	{
		for(b=n;b>=a;b--)
		{
			printf(" ");
		}
		for(c=a;c>=1;c--)
		{
			printf("* ");
		}
		
		printf("\n");
	}
}