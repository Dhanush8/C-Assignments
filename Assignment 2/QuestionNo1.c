#include<stdio.h>
#include<math.h>

void main(){

	int coordinates1[3],coordinates2[3];
	float coordinates3[3];
	int a,b,c,d,e,f;

	printf("Enter the x coordinate of your point: ");
	scanf("%d",&d);
	printf("Enter the y coordinate of your point: ");
	scanf("%d",&e);

	for(a=1;a<=3;a++)
	{	
		printf("Enter the x coordinate of Station %d: ",a,b);
		scanf("%d",&b);
		printf("Enter the y coordinate of Station %d: ",a,c);
		scanf("%d",&c);
		coordinates1[a-1]=b;
		coordinates2[a-1]=c;
	}

	for(f=0;f<3;f++)
	{
		coordinates3[f]=(float)(sqrt(pow((d-coordinates1[f]),2)+pow((e-coordinates2[f]),2)));
	
		if(coordinates3[f]<100)
		{
			printf("Station %d : Distance is Low\n",f+1); 
		}
		else if(coordinates3[f] >=100 && coordinates3[f]<1000)
		{
			printf("Station %d : Distance is Moderate\n",f+1);
		}
		else
		{
			printf("Station %d : Distance is High\n",f+1);
		}
	}

	if(coordinates3[0]<coordinates3[1] && coordinates3[0]<coordinates3[2])
	{
		printf("Nearst Station: Station 1\nDistance: %fm",coordinates3[0]);
	}
	else if(coordinates3[1]<coordinates3[0] && coordinates3[1]<coordinates3[2])
	{
		printf("Nearst Station: Station 2\nDistance: %fm",coordinates3[1]);
	}
	else if(coordinates3[2]<coordinates3[0] && coordinates3[2]<coordinates3[1])
	{
		printf("Nearst Station: Station 3\nDistance: %fm",coordinates3[2]);
	}
	else if(coordinates3[0]==coordinates3[1] && coordinates3[1]<coordinates3[2])
	{
		printf("Nearst Station: Station 1 and Station 2\nDistance: %fm",coordinates3[0]);
	}
	else if(coordinates3[0]==coordinates3[2] && coordinates3[0]<coordinates3[1])
	{
		printf("Nearst Station: Station 1 and Station 3\nDistance: %fm",coordinates3[0]);
	}
	else if(coordinates3[1]==coordinates3[2] && coordinates3[1]<coordinates3[0])
	{
		printf("Nearst Station: Station 2 and Station 3\nDistance: %fm",coordinates3[1]);
	}
	else
	{
		printf("Nearst Station: All Stations\nDistance: %fm",coordinates3[1]);
	}
}