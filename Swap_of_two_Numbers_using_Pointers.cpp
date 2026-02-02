//Program to swap of two Numbers using Pointers
#include<stdio.h>
int main()
{
	int a,b,*i,*j,t;
	printf("Enter value of a :");
	scanf("%d",&a);
	printf("Enter value of b :");
	scanf("%d",&b);
	i=&a;
	j=&b;
	t=*i;
	*i=*j;
	*j=t;
	printf("After Swap :\n");
	printf("Value at a is %d\n",a);
	printf("Value at b is %d\n",b);
	return 0;
}
