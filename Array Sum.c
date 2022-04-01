#include<stdio.h>
int main()
{
    int n,arr[100],sum=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("%d\n",sum);
    for(int j=0;j<n;j++)
    printf("%d\n",arr[j]);


}

