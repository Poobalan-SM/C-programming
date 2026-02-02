//Program to do String Concatenate and String Copy
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	printf("Enter the First String: ");
	gets(str1);
	printf("Enter the Second String: ");
	gets(str2);
	printf("After concatenate :%s\n",strcat(str1,str2));
	printf("After String Copy:%s",strcpy(str1,str2));
	return 0;
}
