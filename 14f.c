/*C program to print last n characters of a given file*/
//Done By Dhanush Kumar,CSE-A
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char ch,name[100];
    int number,length;
    printf("Enter the file name: ");
    fgets(name,sizeof(name),stdin);
    name[strcspn(name,"\n")]=0;
    fp=fopen(name,"r");
    if(fp==NULL)
    {
        printf("file cannot be opened");
        exit(0);
    }
    printf("enter the n value: ");
    scanf("%d",&number);
    fseek(fp,0,SEEK_END);
    length=ftell(fp);
    if(number>length)
    {
        number=length;
    }
    fseek(fp,length-number,SEEK_SET);
    while((ch=fgetc(fp))!=EOF)
    {
        putchar(ch);
    }
    fclose(fp);
    return 0;
}