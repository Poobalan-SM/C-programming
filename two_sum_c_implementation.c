#include<stdio.h>
#include<stdlib.h>
int* twoSum(int* nums,int n,int target,int* returnSize);
int main()
{
    int num[]={3,2,4},t=6,n;
    int *rs=(int*)malloc(sizeof(int));
    n=sizeof(num)/sizeof(num[0]);
    int *ans=twoSum(num,n,t,rs);
    for(int i=0;i<*rs;i++)
        printf("%d ",ans[i]);
    free(ans);
    free(rs);
    return 0;
}
int* twoSum(int* nums, int n, int target, int* returnSize) {
    int *r=(int*)malloc(2*sizeof(int));
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(nums[i]+nums[j]==target)
            {
                r[0]=i;
                r[1]=j;
                *returnSize=2;
                return r;
            }
    *returnSize=0;
    return NULL;
}