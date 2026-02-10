#include <stdio.h>
int main() {
    int n,t,j;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
        j=n-1;
    for(int i=0;i<n/2;i++)
    {
        t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
        j--;
    }
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}