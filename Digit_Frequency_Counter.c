#include <stdio.h>
int main() {
    char num[1000];
    int n[10]={0,0,0,0,0,0,0,0,0,0};
    scanf("%s",&num);
    for(int i=0;num[i]!='\0';i++)
    {
        if(num[i]=='0')
            n[0]=n[0]+1;
        else if(num[i]=='1')
            n[1]=n[1]+1;
        else if(num[i]=='2')
            n[2]=n[2]+1;
        else if(num[i]=='3')
            n[3]=n[3]+1;
        else if(num[i]=='4')
            n[4]=n[4]+1;
        else if(num[i]=='5')
            n[5]=n[5]+1;
        else if(num[i]=='6')
            n[6]=n[6]+1;
        else if(num[i]=='7')
            n[7]=n[7]+1;
        else if(num[i]=='8')
            n[8]=n[8]+1;
        else if(num[i]=='9')
            n[9]=n[9]+1;
    }
    for(int i=0;i<=9;i++)
        printf("%d ",n[i]);
    return 0;
}