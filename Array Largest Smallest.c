#include<stdio.h>
int main()
{
    /*
    int n,num[50],small;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
        scanf("%d",&num[i]);
    small=num[0];
    for(int i=1; i<n; i++)
    {
        if(num[i]<small)
            small=num[i];
    }
    printf("%d",small);
    */
    int n,num[50],large;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
        scanf("%d",&num[i]);
    large=num[0];
    for(int i=1; i<n; i++)
    {
        if(num[i]>large)
            large=num[i];
    }
    printf("%d",large);
}
