#include <stdio.h>
int main() {
    char s[1000];
    scanf("%[^\n]%*c",&s);
    for(int i=0;s[i]!='\0';i++)
    {
        printf("%c",s[i]);
        if(s[i]==' ')
            printf("\n");
    }
    return 0;
}