#include <stdio.h>
#include <string.h>
int main() {
    char a[40];
    gets(a);
    printf("Hello, World!\n");
    printf(a);
    return 0;
}