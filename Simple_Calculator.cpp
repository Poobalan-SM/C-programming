//Program to create Calculator
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the First Number:");
	scanf("%d",&a);
	printf("Enter the Second Number:");
	scanf("%d",&b);
	printf("\n\nAddition of two number is %d\n",a+b);
	printf("Subtraction of two number is %d\n",a-b);
	printf("Multiplication of two number is %d\n",a*b);
	printf("Division of two number is %.2f\n",(float)a/b);
	printf("Modulo Division of two number is %d",a%b);
	return 0;
}
