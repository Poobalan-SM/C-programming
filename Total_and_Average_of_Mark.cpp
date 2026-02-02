//Program to find Total and Average of 5 Marks
#include<stdio.h>
int main()
{
	char name[50];
	int roll,mat,sci,soc,tam,eng,total;
	float average;
	printf("Enter the Name of Student:");
	scanf("%s",&name);
	printf("Enter the Roll number of Student:");
	scanf("%d",&roll);
	printf("Enter the mark of Maths:");
	scanf("%d",&mat);
	printf("Enter the mark of Science:");
	scanf("%d",&sci);
	printf("Enter the mark of Social Science:");
	scanf("%d",&soc);
	printf("Enter the mark of Tamil:");
	scanf("%d",&tam);
	printf("Enter the mark of English:");
	scanf("%d",&eng);
	total=mat+sci+soc+tam+eng;
	average=(float)total/5;
	printf("\n\nName : %s\n",name);
	printf("Roll Number : %d\n",roll);
	printf("Total Mark : %d\n",total);
	printf("Average Mark : %.2f",average);
	return 0;
}
