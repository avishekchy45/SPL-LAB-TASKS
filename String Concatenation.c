#include<stdio.h>
int main()
{
    char str1[50],str2[50];
    int i,j;
    gets(str1);
    gets(str2);
    //int m=strlen(str1),n=strlen(str2);
    //printf("%d %d",m,n);
    for(i = 0; str1[i] != '\0'; i++);
    for(j = 0; str2[j] != '\0'; j++)
    {
        str1[strlen(str1)] = ' ';
        i++;
        str1[i] = str2[j];
    }
    str1[i+1] = '\0';
    printf("After concatenation: %s", str1);
}
