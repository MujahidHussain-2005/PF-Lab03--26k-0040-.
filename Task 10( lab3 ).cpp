#include<stdio.h>
#include<conio.h>
int main()
{
	float number;
	printf("enter any floating point number\n");
	scanf("%f",&number);
	
	printf("Precision with 1 decimal point:\t%.1f\n",number);
	printf("Precision with 3 decimal point:\t%.3f",number);
	getch();
	return 0;
}
