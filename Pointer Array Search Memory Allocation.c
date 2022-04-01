#include<stdio.h>
int main()
{
    int arr[50],size,search;
    int *arrbeg,*arrend;

    scanf("%d",&size);

    arrbeg=arr;
    arrend=arr+(size-1);

    *arrbeg=(int*)malloc(size*sizeof(int));


    for(int i=0; i<size; i++)
        scanf("%d",arrbeg+i);

    arrbeg=arr;

    printf("Enter Value to search : ");
    scanf("%d",&search);

    int position=0;
    while(arrbeg<=arrend)
    {
        position++;
        if(*arrbeg==search)
        {
            printf("%d",position);
            break;
        }
        arrbeg++;
    }
    if(arrbeg>arrend)
    {
        printf("Not Found");
    }

    free(arrbeg);
}

