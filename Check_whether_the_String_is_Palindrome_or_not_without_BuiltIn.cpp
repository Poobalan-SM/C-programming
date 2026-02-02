//Program to Check whether the String is Palindrome or not
#include<stdio.h>
int main()
{
	char str[20];
	int i,len=0,a;
	printf("Enter the String:");
	scanf("%s",str);
	while(str[len]!='\0')
		len++;
	for(i=0;i<len;i++)
		if(str[i]!=str[len-i-1])
		{
			a=1;
			break;
		}
	printf("The Reverse of the String : ");
	for(i=len;i>=0;i--)
	printf("%c",str[i]);
	if(a)
		printf("\nIt is not a Palindrome");
	else
		printf("\nIt is Palingrome");
	return 0;
}
