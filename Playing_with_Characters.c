#include <stdio.h>
#include <string.h>
int main() {
    char ch,s[10],sen[40];
    scanf("%c",&ch);
    scanf("%s\n",s);
    scanf("%[^\n]%*c",sen);
    printf("%c\n%s\n%s",ch,s,sen);
    return 0;
}