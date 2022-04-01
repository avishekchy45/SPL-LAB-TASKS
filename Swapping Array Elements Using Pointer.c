#include<stdio.h>
int main()
{
    int arr[5]= {0,2,4,6,8},arr2[5]= {1,3,5,7,9};
    int *source,*srcend,*dest,*destend;
    source=arr;
    srcend=arr+4;
    dest=arr2;
    destend=arr2+4;
    while(source <= srcend && dest <= destend)
    {
        *source = *source ^ *dest;
        *dest = *dest ^ *source;
        *source = *source^ *dest;
        source++;
        dest++;
    }

    for(int i=0; i<5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for(int i=0; i<5; i++)
    {
        printf("%d ", arr2[i]);
    }
}
