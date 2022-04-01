#include<stdio.h>
int main()
{
    /*
    int i,j,arr[2][2]={1,2,3,4},arr2[2][2]={5,6,7,8},arr3[2][2];
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
    {
        arr3[i][j]=arr[i][j]+arr2[i][j];
        printf("%d ",arr3[i][j]);

    }
    printf("\n");
    }
    */
    //Transpose Matrix
    int i,j,arr[2][2]={1,2,3,4},arr2[2][2]={5,6,7,8},arr3[2][2];
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
    {
        arr3[j][i]=arr[j][i]+arr2[j][i];
        printf("%d ",arr3[j][i]);

    }
    printf("\n");
    }
}


