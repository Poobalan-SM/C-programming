//Program to create a Calculator using switch case
#include<stdio.h>
int main()
{
	int a,b;
	char task;
	printf("Enter the First Number:");
	scanf("%d",&a);
	printf("Enter the Second Number:");
	scanf("%d",&b);
	printf("Select your task:\n");
	printf("+ for Addition\n- for Subtraction\n* for Multiplication\n/ for Division\nM for Modulo Division\n");
	scanf(" %c",&task);
	switch(task)
	{
		case '+':
			printf("You Selected Addition operation\n");
			printf("Addition of two number is %d\n",a+b);
			break;
		case '-':
			printf("You Selected Subtraction operation\n");
			printf("Subtraction of two number is %d\n",a-b);
			break;
		case '*':
			printf("You Selected Multiplication operation\n");
			printf("Multiplication of two number is %d\n",a*b);
			break;
		case '/':
			printf("You Selected Division operation\n");
			printf("Division of two number is %.2f\n",(float)a/b);
			break;
		case '%':
			printf("You Selected Modulo Division operation\n");
			printf("Modulo Division of two number is %d",a%b);
			break;
	}
	return 0;
}
