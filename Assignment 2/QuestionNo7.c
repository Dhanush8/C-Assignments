#include<stdio.h>

void main(){

	int a,b;
	
	for(a=65,b=97;a<90,b<122;a++,b++)
	{
		printf("%c%c,",a,b);
	}
	
	printf("%c%c",a,b);
}