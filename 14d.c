/* C program to merge two files */
// Done By Dhanush Kumar, CSE-A
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() 
{
    FILE *fp1, *fp2, *fp3;
    char name1[100], name2[100], name3[100];
    int count;
    printf("Enter the name of the first file: ");
    fgets(name1,sizeof(name1),stdin);
    name1[strcspn(name1, "\n")] = 0;
    printf("Enter the name of the second file: ");
    fgets(name2,sizeof(name2),stdin);
    name2[strcspn(name2, "\n")] = 0;
    printf("Enter the name of the output file: ");
    fgets(name3,sizeof(name3),stdin);
    name3[strcspn(name3, "\n")] = 0;
    fp1 = fopen(name1,"r");
    fp2 = fopen(name2,"r");
    fp3 = fopen(name3,"w");
    if(fp1==NULL||fp2==NULL||fp3==NULL) 
    {
        printf("There is a problem opening one or more files\n");
        exit(0);
    }
    while((count=fgetc(fp1))!=EOF) 
    {
        fputc(count,fp3);
    }
    while((count=fgetc(fp2))!=EOF) 
    {
        fputc(count,fp3);
    }
    printf("Files merged successfully\n");
    fclose(fp3);
    fclose(fp2);
    fclose(fp1);
    return 0;
}
