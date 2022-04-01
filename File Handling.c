#include<stdio.h>

int main()
{
    FILE *fp;
    fp=fopen("E:\\test.txt","w");
    if (fp==NULL)
    {
        printf("Cannot Create File\n");
        exit(0);
    }
    else
    {
        printf("File is Created\n");
    }
    fputs("Premier University",fp);
    fclose(fp);

}
