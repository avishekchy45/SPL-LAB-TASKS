#include<stdio.h>

int Square(int);

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",Square(n));
}

int Square(int n)
{
    int s=n*n;
    return s;
}

