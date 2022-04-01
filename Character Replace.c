#include<stdio.h>

int main()

{
    char s[100],find,replace;
    int l,i,j,c;
    gets(s);
    //find=getchar();
    //getchar();
    //replace=getchar();
    l=strlen(s);

    for(i=0; i<l; i++)
    {
        if(s[i]=='a' && s[i+1]=='a')
            c=i+1;
    }

    for(j=c+1; j<=l+1; j++)
    {
        s[j+1]=s[j];
    }

    s[l+1]='\0';
    s[c-1]='z';
    s[c]='z';
    s[c+1]='z';

    puts(s);
}
