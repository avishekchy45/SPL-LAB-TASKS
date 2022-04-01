#include <stdio.h>
#include <string.h>
int main()
{
    char hex[50];
    int dec=0,val,i,j;
    gets(hex);
    i = strlen(hex);
    i--;
    for(j=0; hex[j]!='\0'; j++)
    {
        if(hex[j]>='0' && hex[j]<='9')
            val = hex[j] - 48;
        else if(hex[j]>='a' && hex[j]<='f')
            val = hex[j] - 97 + 10;
        else if(hex[j]>='A' && hex[j]<='F')
            val = hex[j] - 65 + 10;
        dec = dec + val * pow(16, i);
        i--;
    }
    printf("%d", dec);
}
