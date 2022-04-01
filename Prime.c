#include<stdio.h>
int main()
{
    int n,i,j,prime;
    scanf("%d",&n);
    for(i=2; i<=n; i++)
    {
        prime=0;
        for(j=2; j<=i-1; j++)
        {
            if(i%j==0)
            {
                prime=1;
                break;
            }
        }
        if(prime==1)
            printf("%d is Not Prime.\n",i);
        else
            printf("%d is Prime.\n",i);
    }
}
