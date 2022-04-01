#include<stdio.h>
int main()
{
    int n,m=1,Fact[50];
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        m*=i;
        Fact[i]=m;
    }
    for(int i=1;i<=n;i++)
    printf("%d ! = %d\n",i,Fact[i]);
}
