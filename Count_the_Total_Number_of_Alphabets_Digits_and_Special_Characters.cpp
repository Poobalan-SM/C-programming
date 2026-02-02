#include<stdio.h>
int main()
{
	char c[50],c1=0,c2=0,c3=0;
	printf("Enter the String:");
	scanf("%s",&c);
	for(int i=0;c[i]!='\0';i++)
	{
		char ch=c[i];
		if(ch>='a'&&ch<='z')
			c1++;
		else if(ch>='0'&&ch<='9')
			c2++;
		else
			c3++;
	}
	printf("The number of alphabets is %d\nThe number of numbers is %d\nThe number of Special character is %d",c1,c2,c3);
	return 0;
}
