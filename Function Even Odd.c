#include<stdio.h>
#include<stdbool.h>
bool EO()
{
    int n;
    scanf("%d",&n);
    if(n%2==0)
        return true;
    else
        return false;
}

int main()
{
    int n;
    if(EO(n))
        printf("Even...");
    else
        printf("Odd...");
}

