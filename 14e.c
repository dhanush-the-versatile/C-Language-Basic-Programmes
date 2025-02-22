/* C program to find number of lines, words, and characters in a file */
// Done By Dhanush Kumar, CSE-A
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() 
{
    FILE *fp;
    char name[100];
    int characters = 0, words = 0, lines = 0;
    char ch;
    int inWord = 0;
    printf("Enter the file name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;
    fp = fopen(name, "r");
    if (fp == NULL) 
    {
        printf("The file cannot be opened.\n");
        exit(0);
    }
    while ((ch = fgetc(fp)) != EOF) 
    {
        characters++;
        if (ch == '\n') 
        {
            lines++;
        }
        if (ch==' '||ch=='\t'||ch=='\n') 
        {
            inWord=0;
        } else 
        {
            if (inWord==0) 
            {
                words++;
                inWord=1;
            }
        }
    }
    if (characters>0&&ch!='\n') 
    {
        lines++;
    }
    printf("Number of characters: %d\n", characters);
    printf("Number of words: %d\n", words);
    printf("Number of lines: %d\n", lines);
    fclose(fp);
    return 0;
}