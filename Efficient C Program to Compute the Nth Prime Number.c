#include <stdio.h>
int main() {
    int tc;
    scanf("%d",&tc);
    int num,ans[tc];
    for(int i=0;i<tc;i++)
    {
        scanf("%d",&num);
        int c=0,n=2; 
        while(c!=num)
        {
            int ct=0;
            for(int j=1;j<n;j++)
                if(n%j==0)
                    ct++;
            if(ct==1)
                c++;
            n++;
        }
        ans[i]=n-1;
    }
    for(int i=0;i<tc;i++)
        printf("%d\n",ans[i]);
    return 0;
}