//Program to Find the Simple Interest
#include<stdio.h>
int main()
{
	float p,r,t,si;
	printf("Enter the Principal Amount:");
	scanf("%f",&p);
	printf("Enter the Rate of Interest:");
	scanf("%f",&r);
	printf("Enter the Time Period:");
	scanf("%f",&t);
	si=(p*r*t)/100;
	printf("The Simple Interest is %.2f",si);
	return 0;
	}
