//Program to find the Reverse of number
#include<stdio.h>
int main()
{
	int num,digit,rev=0;
	printf("Enter the number to be Reverse:");
	scanf("%d",&num);
	while(num!=0)
	{
		digit=num%10;
		rev=(rev*10)+digit;
		num=num/10;
	}
	printf("The Reverse of the number is %d",rev);
	return 0;
}
