//Program to find the Biggest among three numbers
#include<stdio.h> 
int main() 
{ 
    int a,b,c;
    printf("Enter the First number: ");
    scanf("%d",&a);
    printf("Enter the Second number: ");
    scanf("%d",&b);
    printf("Enter the Third number: ");
    scanf("%d",&c);
    if(a>=b)
        if(a>=c) 
            printf("%d is the Biggest number",a);
        else
            printf("%d is the Biggest number",c); 
    else
        if(b>=c) 
            printf("%d is the Biggest number",b); 
        else
            printf("%d is the Biggest number",c); 
    return 0; 
} 
