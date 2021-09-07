#include<stdio.h>

void main(){
	
	int a,b,n;
	
	printf("Enter the Number of Terms: ");
	scanf("%d",&n);

	int sequence[n];
	
	sequence[0]=0;
	sequence[1]=1;

	for(a=2;a<n;a++)
	{	
		sequence[a]=sequence[a-1]+sequence[a-2];
	}
	
	for(b=0;b<n-1;b++)
	{
		printf("%d,",sequence[b]);
	}

	printf("%d",sequence[b]);

}