#include<stdio.h>
int main()
{
    int n;
    float sum=0;
    scanf("%d",&n);
    for(float i=1; i<=((2*n)-1); i=i+2)
    {
        sum+=1/i;
    }
    printf("%f\n",sum);
}
