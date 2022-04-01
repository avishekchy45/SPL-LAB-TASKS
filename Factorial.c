#include<stdio.h>
int main()
{
    int n;
    float m=1;
    scanf("%d",&n);
    for(float i=1; i<=n; i++)
    {
        m*=i;
    }
    printf("%.2f\n",m);
}
