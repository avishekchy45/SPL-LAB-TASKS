#include<stdio.h>

int main()
{
    char s[100],alpha[26],c;
    int i,j,l;
    scanf("%s",&s);
    //l=strlen(s);

    for(i=0;s[i]!='\0';i++)
    {
        int p=s[i]-'a';
        alpha[p]=alpha[p]+1;
    }

    for(c='a';c<='z';c++)
    {
        int p=c-'a';
        for(j=0;j<alpha[p];j++)
            printf("%c",c);
    }
}
