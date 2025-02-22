/*C program to read student name and marks from the command line and display the student details along with the total*/
// Done By Dhanush Kumar, CSE-A
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) 
{
    if (argc != 5) 
    {
        printf("Usage: %s <Name> <Marks1> <Marks2> <Marks3>\n", argv[0]);
        exit(0);
    }
    char *name = argv[1];
    int marks1 = atoi(argv[2]);
    int marks2 = atoi(argv[3]);
    int marks3 = atoi(argv[4]);
    int total = marks1 + marks2 + marks3;
    printf("\n--- Student Details ---\n");
    printf("Student Name=: %s\n", name);
    printf("Marks in Subject 1: %d\n", marks1);
    printf("Marks in Subject 2: %d\n", marks2);
    printf("Marks in Subject 3: %d\n", marks3);
    printf("Total Marks: %d\n", total);
    return 0;
}
