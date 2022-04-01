#include<stdio.h>
int main()
{
    int n;
    float m=1,sum=0;
    scanf("%d",&n);
    for(float j=1; j<=n; j++)
    {
        m=1;
        for(float i=j; i>=1; i--)
        {
            m*=i;
        }
        sum+=1/m;
    }
    printf("%f\n",sum);
}

