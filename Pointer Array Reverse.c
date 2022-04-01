#include<stdio.h>
int main()
{
    int arr[50],size;
    int *rev,*arrbeg,*arrend;

    rev=arr;

    scanf("%d",&size);

    arrbeg=arr;
    arrend=arr+(size-1);

    for(int i=0; i<size; i++)
        scanf("%d",rev+i);

    rev=arr;

    while(arrbeg<arrend)
    {
        *arrbeg^=*arrend;
        *arrend^=*arrbeg;
        *arrbeg^=*arrend;
        arrbeg++;
        arrend--;
    }

    for(int i=0;i<size;i++)
       printf("%d ",*(rev+i));

}
