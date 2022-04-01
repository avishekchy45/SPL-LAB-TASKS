#include<stdio.h>
int main()
{
    int n[5];
    int *p;
    p=n;

    for(int i=0; i<5; i++)
    {
        //scanf("%d",&p+i);
        scanf("%d",&p[i]);
        //p++;
    }

    p=n;

    for(int i=0; i<5; i++)
    {
        //printf("%d\t",*p+i);
        printf("%d\t",i[p]);
        //*p++;
    }

}

