/*C-program to copy one string to another string without using pointers*/
//Done By Dhanush Kumar,CSE-A
#include<stdio.h>
#include<string.h>
void main() 
{
    char str1[100], str2[100];
    printf("enter string 1\n");
    gets(str1);
    printf("enter string 2\n");
    gets(str2);
    strcpy(str2,str1);
    puts(str1);
    puts(str2);
}
