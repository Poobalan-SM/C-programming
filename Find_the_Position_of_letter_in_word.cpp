#include<stdio.h>
int main()
{
	char c[30],ch;
	int c1=0;
	printf("Enter the String:");
	scanf("%s",&c);
	printf("Enter the character:");
	scanf(" %c",&ch);
	for(int i=0;c[i]!='\0';i++)
	{
		c1++;
		if(c[i]==ch)
			break;
	}
	printf("The first occurance of the letter is %d",c1);
	return 0;
}
