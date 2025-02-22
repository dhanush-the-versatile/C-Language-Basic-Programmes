/*C-program to write and read text into a file*/
//Done By Dhanush Kumar,CSE-A
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    int n;
    char name[100];
    printf("enter file name that need to be opened: \n");
    fgets(name);
    fp=fopen(name,"w");
    if(fp==NULL)
    {
        printf("files cannot be opened");
    }
    printf("enter the value into the file");
    fread(fp,"%d");
    printf("Validate the data");
    fwrite(fp,"%d");
    printf("Data entered correctly");
    fclose(fp);
    return 0;
}