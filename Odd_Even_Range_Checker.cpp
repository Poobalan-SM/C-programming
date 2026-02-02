//Program to find the odd or even from 20 to 50
#include<stdio.h>
int main()
{
	int i;
	for(i=20;i<=50;i++)
	{
		if(i%2==0)
			printf("%d is a Even number\n",i);
		else
			printf("%d id a Odd number\n",i);
	}
	return 0;
}
