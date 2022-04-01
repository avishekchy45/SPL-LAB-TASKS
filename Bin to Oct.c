#include<stdio.h>
int main()
{
    int bin,oct=0,rem,i=0,rev=0;
    scanf("%d",&bin);
    while(bin!=0)
    {
        rem=bin%10;
        bin=bin/10;
        oct=oct+rem*pow(2,i);
        i++;
        if(i==3)
        {
            i=0;
            oct=oct*10;
        }
    }
    while(oct!=0)
    {
        rem=oct%10;
        oct=oct/10;
        rev=10*rev+rem;
    }
    printf("%d\n",rev);
}
