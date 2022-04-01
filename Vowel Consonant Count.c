#include<stdio.h>
int main()
{
    char S[50],V[50],C[50];
    int i,v=0,c=0,p=0,q=0;
    gets(S);
    //scanf("%[^\n]",S);
    for(i=0; S[i]!='\0'; i++)
    {
        if(S[i]=='a'||S[i]=='e'||S[i]=='i'||S[i]=='o'||S[i]=='u')
        {
            v++;
            V[p]=S[i];
            p++;
        }
        else
        {
            c++;
            C[q]=S[i];
            q++;
        }
    }
    V[p]='\0',C[q]='\0';
    printf("Vowel : %d \nConsonant : %d \n",v,c);
    printf("Vowels : ");
    for(int j=0;j<=v; j++)
        printf("%c",V[j]);
    printf("\nConsonants : ");
    for(int j=0;j<=c; j++)
        printf("%c",C[j]);

}
