#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100],str2[100],c=0;
    int i;

    gets(str1);
    gets(str2);

    if(strlen(str1)!=strlen(str2))
        printf("Strings are not same...");
    else
        for(i=0; str1[i]!='\0'&&str2[i]!='\0'; i++)
        {
            if(str1[i]==str2[i])
                c++;
        }

    if(c==strlen(str1))
        printf("Strings are same...");
    else
        printf("Strings are not same...");
}

