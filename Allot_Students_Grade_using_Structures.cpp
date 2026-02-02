//Program to print Students Grade
#include <stdio.h>
int grade(int i);
struct stud
{
    int rollno;
    char name[30];
    int mark;
    char grade;
}s;
int main() 
{
    printf("Enter the Rollno:\n");
    scanf("%d",&s.rollno);
    printf("Enter the Name:\n");
    scanf("%s",&s.name);
    printf("\n\nThe Roll number of Student is %d",s.rollno);
    printf("\nThe name of the Student is %s",s.name);
    printf("\nEnter the Maths mark:");
    grade(0);
    printf("\nEnter the Physics mark:");
    grade(0);
    printf("\nEnter the Chemistry mark:");
    grade(0);
    printf("\nEnter the Computer science mark:");
    grade(0);
    printf("\nEnter the Tamil mark:");
    grade(0);
    printf("\nEnter the English mark:");
    grade(0);
    return 0;
}
int grade(int i)
{
    scanf("%d",&s.mark);  
	if(s.mark>=80)
		printf("You are passed with A grade\n");
	else if(s.mark>=60&&s.mark<80)
		printf("You are passed with B grade\n");
	else if(s.mark>=40&&s.mark<60)
		printf("You are passed with C grade\n");
	else
		printf("Sorry!. You are Failed\n");
	return 0;
}
