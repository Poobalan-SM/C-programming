//Program to print 5 table using function
#include<stdio.h>
int table(int);
int main()
{
	int num;
	printf("Enter the positive number: ");
	scanf("%d",&num);
	printf(" Multiplication Table of %d is:\n",num);
	table(num);
	return 0;
}
int table(int num)
{
	int count=1;
	for(count;count<=10;count++)
	{
		printf("%d X %d = %d\n",num,count,num*count);
	}
	return 0;
}
