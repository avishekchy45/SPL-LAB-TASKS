#include<stdio.h>
int main()
{
    int n,count=0,count1=0,k=0,m;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=(n-i); j++)
        {
            printf(" ");
            count++;
        }
        for(k=0; k<2*i-1;k++)
        {
            if (count <= n-1)
            {
                printf("%d ", i+k);
                count++;
            }
            else
            {
                count1++;
                printf("%d ", (i+k-2*count1));
            }
        }
        count1 = count =  0;
        printf("\n");
    }
    return 0;
}
