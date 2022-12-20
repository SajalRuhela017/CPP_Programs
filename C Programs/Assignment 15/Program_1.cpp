//Sajal
//20238
//Program 1

#include<stdio.h>

int main()
{
    char c;
    FILE *fp;
    fp=fopen("INPUT.txt","w");
    for (int i = 0; i < 100; i++)
    {
        scanf("%c",&c);
        fputc(c,fp);
    }
    fclose(fp);
    fp=fopen("INPUT.txt","r");
    while ((c=fgetc(fp))!=EOF)
    {
        printf("%c",c);
    }
    fclose(fp);
    return 0;
}
