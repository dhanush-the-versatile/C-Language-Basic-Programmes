/* C program to find the total, average of n students using structures*/
//Done By Dhanush Kumar,CSE-A
#include<stdio.h>
#include<string.h>
struct student 
{
    char name[50];
    int marks[5];
};
int main() 
{
    struct student stu[5];
    int i, j, total;
    float average;
	printf("Enter the details of 5 students:\n");
    for (i = 0; i < 5; i++) 
	{
        printf("\nEnter the name of student %d: ", i + 1);
        scanf("%s", stu[i].name);
		printf("Enter the marks of 5 subjects for %s:\n", stu[i].name);
        for (j = 0; j < 5; j++)
		{
            printf("Subject %d: ", j + 1);
            scanf("%d", &stu[i].marks[j]);
        }
    }
    printf("\nDisplaying the details of students:\n");
    for (i = 0; i < 5; i++) 
	{
        printf("\nName: %s\n", stu[i].name);
		total = 0;
        printf("Marks: ");
        for (j = 0; j < 5; j++) 
		{
            printf("%d ", stu[i].marks[j]);
            total += stu[i].marks[j];
        }
		average = total / 5.0;
        printf("\nTotal Marks: %d", total);
        printf("\nAverage Marks: %.2f\n", average);
    }
	return 0;
}

