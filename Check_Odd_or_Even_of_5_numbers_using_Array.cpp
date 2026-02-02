//Program to check Odd or Even of 5 numbers
#include<stdio.h>
int main()
{
	int num[5],i;
	printf("Enter the 5 numbers to check whether it os Odd or Even :\n");
	for(i=0;i<5;i++)
		scanf("%d",&num[i]);
	for(i=0;i<5;i++)
	{
		if(num[i]%2==0)
			printf("%d is a Even number\n",num[i]);
		else
			printf("%d id a Odd number\n",num[i]);
	}
	return 0;
}
