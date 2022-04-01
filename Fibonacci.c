#include<stdio.h>
int main()
{
    int n,F[1000];
    F[0]=0,F[1]=1;
    scanf("%d",&n);
    for(int i=2; i<n; i++)
    {
        F[i]=F[0]+F[1];
        //printf("%d\n",F[i]);
        F[0]=F[1];
        F[1]=F[i];
    }
    F[0]=0,F[1]=1;
    for(int i=0; i<=n-1; i++)
        printf("%d\n",F[i]);

}
