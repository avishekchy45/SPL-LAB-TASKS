#include<stdio.h>
int main()
{
    int n;
    float m=1,sum=0;
    scanf("%d",&n);
    for(float i=1; i<=((2*n)-1); i=i+2)
    {
        m=1;
        for(float j=i; j>=1; j--)
            m*=j;
        sum+=1/m;
    }
    printf("%f\n",sum);
}
