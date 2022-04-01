#include<stdio.h>
int main()
{
    int bin,dec=0,rem,i=0;
    scanf("%d",&bin);
    while(bin!=0)
    {
        rem=bin%10;
        bin=bin/10;
        dec=dec+rem*pow(2,i);
        i++;
    }
    printf("%d\n",dec);
}
