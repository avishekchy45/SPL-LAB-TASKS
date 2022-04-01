#include<stdio.h>

int main()

{

    int arr[5]= {1,2,3,4,5},arr2[5]= {6,7,8,9,10};
    int *sourcearr,*srcarrend,*destarr,*destarrend;

    sourcearr=arr;
    srcarrend=arr+4;
    destarr=arr2;
    destarrend=arr2+4;

    printf("Before Swapping\n");
    for(int i=0; i<5; i++)
    {
        printf("%d ",*sourcearr+i);
    }

    printf("\n");

    for(int i=0; i<5; i++)
    {
        printf("%d ",*destarr+i);
    }

    printf("\n");

    while(sourcearr <= srcarrend && destarr <= destarrend)
    {
        *sourcearr = *sourcearr ^ *destarr;
        *destarr = *destarr ^ *sourcearr;
        *sourcearr = *sourcearr^ *destarr;
        sourcearr++;
        destarr++;
    }

    //sourcearr=arr;
    //destarr=arr2;

    printf("After Swapping\n");
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
