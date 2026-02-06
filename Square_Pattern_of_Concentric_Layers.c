#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int r=(2*n)-1;
    int arr[r][r];   
    for(int k=0;k<n;k++)
        for(int i=k;i<n;i++)
            for(int j=k;j<r-k;j++)
                arr[i][j]=n-k;
    int a=r-1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<r;j++)
            arr[a][j]=arr[i][j];
        a--;
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
    return 0;
}