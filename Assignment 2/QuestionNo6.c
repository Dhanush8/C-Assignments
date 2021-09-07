#include <stdio.h>
#include <math.h>

void main(){

	int n, m, firstDigit, lastDigit, digits;

	printf("Enter Any Number: ");
	scanf("%d", &n);
	
	m=sqrt(pow(n,2));

	lastDigit = m % 10;     

	digits = (int)log10(m); 

	firstDigit = (int)(m / pow(10, digits)); 

	printf("First Digit = %d\n", firstDigit);
	printf("Last Digit = %d\n", lastDigit);

}