#include<stdio.h>
int main()
{
	char c[30];
	int c1=1;
	printf("Enter the String:");
	gets(c);
	for(int i=0;c[i]!='\0';i++)
		if(c[i]==' ')
			c1++;
			
	printf("The total number of words is %d",c1);
	return 0;
}
