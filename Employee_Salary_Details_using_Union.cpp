//Program to Print Employee Details 
#include <stdio.h>
#include <string.h>
union employee
{
    int id;
    char name[40],branch[50];
    long int gross;
}e;
int main() 
{
	long int basic,hra,da;
    e.id=23;
    printf("Employee ID :%d\n",e.id);
    strcpy(e.name,"Poobalan");
    printf("Employee name :%s\n",e.name);
    strcpy(e.branch,"CSE");
    printf("Employee Department :%s\n",e.branch);
    printf("Enter the Basic Salary amount : ");
    scanf("%ld",&basic);
    printf("Enter the HRA amount : ");
    scanf("%ld",&hra);
    printf("Enter the DA amount : ");
    scanf("%ld",&da);
    e.gross=basic+hra+da;
    printf("Gross Salary of Employee :%ld",e.gross);
    return 0;
   }
   
