#include<stdio.h>
#include<string.h>

void main(){

	char maritalStatus[10],sex[7];
	int age;

	printf("Marital Status: ");
	scanf("%s",&maritalStatus);
	printf("Sex: ");
	scanf("%s",&sex);
	printf("Age: ");
	scanf("%d",&age);

	if(strcmp(maritalStatus,"Married")==0)
	{
		printf("Driver is insured!");
	}
	else if(strcmp(maritalStatus,"Unmarried")==0)
	{
		if(strcmp(sex,"Male")==0 && age>30)
		{
			printf("Driver is insured!");
		}
		else if(strcmp(sex,"Female")==0 && age>25)
		{
			printf("Driver is insured!");
		}
		else
		{
			printf("Driver is not insured!");
		}
	}
	else
	{
		printf("Driver is not insured!");
	}
}