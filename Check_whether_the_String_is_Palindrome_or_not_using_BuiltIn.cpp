//Program to Check whether the String is Palindrome or not
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	printf("Enter the String:");
	scanf("%s",str1);
	strcpy(str2,str1);
	strrev(str1);
	printf("Reverse of String is %s\n",str1);
	if(strcmp(str1,str2)==0)
		printf("It is Palindrome");
	else
		printf("It is not a Palingrome");
	return 0;
}
