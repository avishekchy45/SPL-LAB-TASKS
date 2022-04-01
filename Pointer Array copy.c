#include<stdio.h>

int main()

{

    int arr[5],arr2[5];
    int *source,*last,*dest;
    source=arr;
    last=arr+4;
    dest=arr2;

    for(int i=0; i<5; i++)
    {
        scanf("%d",&source[i]);
    }

    source=arr;


    while(source<=last)
    {
        *dest=*source;
        source++;
        dest++;
    }

    for(int i=0; i<5; i++)
    {
        printf("%d ",*dest+i);
    }

}
