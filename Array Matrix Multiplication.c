//Multiplication of Two Matrices with Array by AVISHEK CHOWDHURY
#include <stdio.h>
int main()
{
    int m,n,a,b,p,q,k,sum=0,A[10][10],B[10][10],mult[10][10];

    printf("Enter the Number of Rows and Columns of First Matrix\n");
    scanf("%d %d",&m,&n);

    printf("Enter the Elements of First Matrix\n");
    for(a=0;a<m;a++)
        for(b=0;b<n;b++)
            scanf("%d",&A[a][b]);

    printf("Enter the Number of Rows and Columns of Second Matrix\n");
    scanf("%d%d",&p,&q);

    if(n!=p)
        printf("Dimension Error.\n");
    else
    {
        printf("Enter the Elements of Second matrix\n");
        for(a=0;a<p;a++)
            for(b=0;b<q;b++)
                scanf("%d",&B[a][b]);

        for(a=0;a<m;a++)
        {
            for(b=0;b<q;b++)
            {
                sum=0;
                for(k=0;k<p;k++)
                {
                    sum=sum+A[a][k]*B[k][b];
                }
                mult[a][b]=sum;
            }
        }

        printf("Product of the Matrices:\n");
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<q;j++)
                printf("%d\t",mult[i][j]);
            printf("\n");
        }
    }

    return 0;
}
