#include<stdio.h>
#include<math.h>

void main(){

	int year,days,x,y,z;
	printf("Enter the Year: ");
	scanf("%d",&year);
	x=year-2001;
	y=sqrt(pow(x,2));	
	
	if(x>=0)
	{
		days=366*(y/4)+365*(y-(y/4));
		z=days%7;
	}
	else
	{
		days=366*((y/4)+1)+365*(y-((y/4)+1));
		z=7-days%7;
	}

		switch(z)
		{
			case 0:
				printf("The Day on 1st January: Monday");
				break;
			
			case 1:
				printf("The Day on 1st January: Tuesday");
				break;
			
			case 2:
				printf("The Day on 1st January: Wednesday");
				break;
			
			case 3:
				printf("The Day on 1st January: Thursday");
				break;
			
			case 4:
				printf("The Day on 1st January: Friday");
				break;
			
			case 5:
				printf("The Day on 1st January: Saturday");
				break;

			case 6:
				printf("The Day on 1st January: Sunday");
				break;

			case 7:
				printf("The Day on 1st January: Monday");
				break;
		
		}

}