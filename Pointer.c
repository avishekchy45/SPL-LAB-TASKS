#include<stdio.h>
int main()
{
    int a=5;
    int *p;
    p=&a;
    printf("Value of p: %d \nAddress of p: %d",*p,p);
}
