//Program to print the name in file
#include<stdio.h>
int main()
{
	FILE *a;
	a=fopen("File Handeling.txt","w");
	fprintf(a,"Name : S.M.Poobalan");
	fclose(a);
	return 0;
}
