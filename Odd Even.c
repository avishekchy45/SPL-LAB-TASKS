#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if(i%2==0)
            printf("%d is Even.\n",i);
        else
            printf("%d is Odd.\n",i);
    }
    return 0;
}
