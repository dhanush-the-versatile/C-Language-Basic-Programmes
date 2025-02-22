/*C-program to implement self referential structure*/
//Done By Dhanush Kumar,CSE-A
#include<stdio.h>
struct timer
{
    int day;
    int year;
    int month;
};
struct student
{
    char name[30];
    int roll;
    float marks;
    struct timer obj;
};
int main() 
{
    int i, n;
    printf("Enter how many students you want: ");
    scanf("%d", &n);
	struct student s[n];
    printf("Enter student details:\n");
    for(i=0;i< n;i++)
    {
        printf("Enter the name of student %d:",i+1);
        scanf("%s",s[i].name);
		printf("Enter roll number of student %d:",i+1);
        scanf("%d",&s[i].roll);
		printf("Enter marks of student %d:",i+1);
        scanf("%f",&s[i].marks);
		printf("Enter year of joining student %d:",i+1);
        scanf("%d",&s[i].obj.year);
		printf("Enter month of joining student %d:",i+1);
        scanf("%d",&s[i].obj.month);
		printf("Enter day of joining student %d:", i+1);
        scanf("%d",&s[i].obj.day);
    }
    printf("\nThe details of the students are:\n");
    for(i = 0;i<n;i++)
    {
        printf("\nStudent %d:\n",i + 1);
        printf("Name:%s\n",s[i].name);
        printf("Roll number: %d\n",s[i].roll);
        printf("Marks: %.2f\n",s[i].marks);
        printf("Year of joining: %d\n",s[i].obj.year);
        printf("Month of joining: %d\n",s[i].obj.month);
        printf("Day of joining: %d\n",s[i].obj.day);
    }
	return 0;
}