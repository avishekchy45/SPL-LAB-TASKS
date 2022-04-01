#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=(n-i)+1; j++)
            printf(" ");
        for(int k=i-1; k>=0; k--)
            printf("%d",i+k);
        for(int l=1; l<=i-1; l++)
            printf("%d",i+l);
        printf("\n");
    }
    return 0;
}

