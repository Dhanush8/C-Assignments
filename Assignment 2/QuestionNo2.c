#include<stdio.h>

void main(){
	
	float num1,num2;
	char operator;
	
	printf("Enter the First Number: ");
	scanf("%f",&num1);
	printf("Enter the Secound Number: ");
	scanf("%f",&num2);
	printf("Operator: ");
	scanf(" %c",&operator);

switch(operator){

	case '+':
		printf("(%f) + (%f) = %f\n",num1,num2,num1+num2);
		break;
	case '-':
		printf("(%f) - (%f) = %f\n",num1,num2,num1-num2);
		break;
	case '*':
		printf("(%f) * (%f) = %f\n",num1,num2,num1*num2);
		break;
	case '/':
		printf("(%f) / (%f) = %f\n",num1,num2,num1/num2);
		break;
	default:
		printf("Plese Enter a Correct Operator(+ , - , * , /) and Try Again!\n");
		break;
	}

}
