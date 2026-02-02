#include<stdio.h>
int main()
{
	char c[10];
	printf("Enter the string:");
	scanf("%s",&c);
	for(int i=0;c[i]!='\0';i++)
	{
		char ch=c[i];
		if(ch>='a'&&ch<='z')
			c[i]=ch-32;
		else
			c[i]=ch+32;
	}
	printf("%s",c);
	return 0;
}
