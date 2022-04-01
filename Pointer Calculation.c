#include<stdio.h>
int main()
{
    int a=9,b=3;
    int *p,*q;
    p=&a;
    q=&b;
    printf("%d %d %d %d",*p + *q,*p - *q,*p * *q,*p/ *q);
}

