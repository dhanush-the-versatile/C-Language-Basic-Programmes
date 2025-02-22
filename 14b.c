/* C-program to write and read data into a binary file using fread() and fwrite() */
// Done By Dhanush Kumar, CSE-A
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() 
{
    FILE *fp;
    int n;
    char name[100];
    printf("Enter file name that needs to be opened: \n");
    fgets(name);
    fp=fopen(name,"wb");
    if(fp==NULL)
    {
        printf("File cannot be accessed\n");
        exit(0);
    }
    printf("Enter an integer value to write into the binary file: ");
    scanf("%d",&n);
    fwrite(fp,"%d");
    printf("Data written to the binary file successfully.\n");
    fclose(fp);
    fp=fopen(name,"rb");
    if(fp==NULL)
    {
        printf("File cannot be opened for reading.\n");
        exit(0);
    }
    printf("Reading data from the binary file:\n");
    fread(fp,"%d");
    printf("Data read from the file: %d\n", n);
    fclose(fp);
    return 0;
}
