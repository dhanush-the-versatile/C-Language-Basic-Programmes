/*C-program to Enter n students data using calloc() and display failed students list*/
//Done By Dhanush Kumar,CSE-A
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student 
{
    char name[50];
    int marks[5];
};
int main() 
{
    int n, i, j;
    struct student *stu;
	printf("Enter the number of students: ");
    scanf("%d",&n);
    stu=(struct student*)calloc(n,sizeof(struct student));
    if(stu==NULL) 
	{
        printf("Memory allocation failed!\n");
        exit(0);
    }
    for (i=0;i<n;i++) 
	{
        printf("Enter the name of student %d: ",i+1);
        scanf("%s",stu[i].name);
		printf("Enter the marks of 5 subjects for %s:\n",stu[i].name);
        for (j=0;j< 5;j++) 
		{
            printf("Subject %d: ",j+1);
            scanf("%d",&stu[i].marks[j]);
        }
    }
    printf("\nList of students who failed in any subject:\n");
    int failedCount=0;
	for (i=0;i<n;i++) 
	{
        int hasFailed = 0;
        for (j=0;j<5;j++) 
		{
            if(stu[i].marks[j]<40) 
			{
                hasFailed=1;
                break;
            }
        }
        if(hasFailed) 
		{
            printf("Student Name: %s\n",stu[i].name);
            printf("Marks: ");
            for (j=0;j<5;j++) 
			{
                printf("%d",stu[i].marks[j]);
            }
            printf("\n");
            failedCount++;
        }
    }
	return 0;
}