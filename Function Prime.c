#include<stdio.h>
#include<stdbool.h>

bool Prime()
{
    int n,i,prime=0;
    scanf("%d",&n);
    for(i=2; i<=n-1; i++)
    {
            if(n%i==0)
            {
                prime=1;
                break;
            }
        }
        if(prime==1)
            return true;
        else
            return false;
}

int main()
{
    int prime;
    if(Prime(prime))
        printf("Composite...");
    else
        printf("Prime...");
}
