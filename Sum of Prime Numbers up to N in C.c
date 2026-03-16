#include <stdio.h>
int prime(int n);
int main() {
    int n,inp;
    scanf("%d",&n);
    int ans[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&inp);
        int sum=0;
        while(inp!=0)
        {
            sum+=prime(inp);
            inp--;
        }
        ans[i]=sum;
    }
    for(int i=0;i<n;i++)
        printf("%d\n",ans[i]);
    return 0;
}
int prime(int n)
{
    int c=0;
    for(int i=1;i<n;i++)
        if(n%i==0)
            c++;
    if(c==1)
        return n;
    else
        return 0;
}