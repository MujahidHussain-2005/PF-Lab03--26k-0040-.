#include<stdio.h>
#include<conio.h>
int main()
{
	char city[20],country[20],grade;
	int area,population;
	printf(" Enter your city name?\n ");
	scanf("%s",&city);
	getchar();
	printf("Enter you country name?\n");
	scanf("%s",&country);
	getchar();
	printf("What is your grade \n");
	scanf("%c",&grade);
	getchar();
	printf("enter the area ;\n");
	scanf("%d",&area);
	getchar();
	printf("enter the population:\n");
	scanf("%d",&population);
	printf("you live in %s,%s\n",city,country);
	printf("Population: %d\n",population);
	printf("Area : %d\n",area);
	printf("Grade : %c\n",grade);
}
