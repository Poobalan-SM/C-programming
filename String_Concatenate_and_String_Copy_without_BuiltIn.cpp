//Program to do String Concatenate and String Copy
#include<stdio.h>
int main()
{
	char str1[20],str2[20];
	int i=0;
	printf("Enter the First String: ");
	scanf("%s",&str1);
	printf("Enter the Second String: ");
	scanf("%s",&str2);
	printf("After concatenate :%s %s\n",str1,str2);
	while(str2[i]!='\0')
    {
        str1[i]=str2[i];
        i++;
    }
    str1[i]='\0';
	printf("After String Copy:%s",str1);
	return 0;
}
