#include<stdio.h>

void swap(int *p,int *q)
{
    int c;
    c=*p;
    *p=*q;
    *q=c;
}

int main()
{
    int a=5,b=10;
    int *p,*q;
    p=&a;
    q=&b;
    printf("%d %d\n",*p,*q);
    swap(&a,&b);
    printf("%d %d",*p,*q);

}

