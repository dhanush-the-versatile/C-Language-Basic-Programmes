/* C program to copy one file to another */
//Done by Dhanush Kumar,CSE-A
#include <stdio.h>
#include <stdlib.h>
int main() 
{
    FILE *fp1, *fp2;
    char name[100];
    int count, i;
    printf("Enter the file name:");
    gets(name);
    fp1=fopen(name,"r");
    if (fp1==NULL) 
    {
        printf("File 1 cannot be accessed");
        exit(0);
    }
    printf("Enter the file name 2:");
    gets(name);
    fp2=fopen(name, "w");
    if(fp2==NULL) 
    {
        printf("File 2 cannot be accessed");
        exit(0);
    }
    printf("Both files opened successfully\n");
    count=fgetc(fp1);
    while(count!=EOF) 
    {
        fputc(count,fp2);
        count=fgetc(fp1);
    }
    printf("Files successfully copied");
    fclose(fp2);
    fclose(fp1);
    return 0;
}