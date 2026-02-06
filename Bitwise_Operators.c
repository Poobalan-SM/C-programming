#include <stdio.h>
int main() {
    int n,k,land=0,lor=0,lexor=0;
    scanf("%d %d",&n,&k);
    int num[n],and[30],or[30],exor[30];
    int a=0;
    for(int i=1;i<=n;i++)
        num[i-1]=i;
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
        {
            and[a]=num[i]&num[j];
            or[a]=num[i]|num[j];
            exor[a]=num[i]^num[j];
            if((land<and[a])&&(and[a]<k))
                land=and[a];
            if((lor<or[a])&&(or[a]<k))
                lor=or[a];
            if((lexor<exor[a])&&(exor[a]<k))
                lexor=exor[a];
            a++;
        }
    printf("%d\n%d\n%d",land,lor,lexor);
    return 0;
}