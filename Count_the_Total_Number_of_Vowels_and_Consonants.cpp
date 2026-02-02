#include<stdio.h>
int main()
{
	char c[30],c1=0,c2=0;
	printf("Enter the String:");
	scanf("%s",&c);
	for(int i=0;c[i]!='\0';i++)
	{
		if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u')
			c1++;
		else
			c2++;
	}
	printf("The number of vowels is %d\nthe number of consonants is %d",c1,c2);
	return 0;
}
