#include<stdio.h>

void main(){

	int year,days,leap=0,notLeap=0,x,y,i;
	printf("Enter the Year: ");
	scanf("%d",&year);
	x=year-2001;

	if(x>=0)
	{
		for(i=2001;i<year;i++)
		{
			if(i%4==0)
			{
				if(i%100==0)
				{
					if(i%400==0)
					{
						leap+=1;
					}
					else
					{
						notLeap+=1;
					}
				}
				else
				{
					leap+=1;
				}
			}
			else
			{
				notLeap+=1;
			}
		}

		days=(366*leap)+(365*notLeap);
		y=days%7;
	}

	else
	{	
		for(i=2000;i>=year;i--)
		{
			if(i%4==0)
			{
				if(i%100==0)
				{
					if(i%400==0)
					{
						leap+=1;
					}
					else
					{
						notLeap+=1;
					}
				}
				else
				{
					leap+=1;
				}
			}
			else
			{
				notLeap+=1;
			}
		}
		
		days=(366*leap)+(365*notLeap);
		y=7-(days%7);
	}

		switch(y)
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
