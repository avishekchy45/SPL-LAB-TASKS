#include<stdio.h>
int main()
{
    int m,n,i,r=1;
    scanf("%d %d",&m,&n);
    for(i=0;i<n;i++)
        r*=m;
    printf("%d \n",r);
}
