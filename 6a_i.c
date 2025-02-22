/* C-program to implement structure with nested structure */
// Done By Dhanush Kumar, CSE-A
#include <stdio.h>
struct timer 
{
    int day;
    int month;
    int year;
};
struct student 
{
    char name[50];
    char phone[15];
    char branch[50];
    struct timer obj;
};
int main() 
{
    int i, n;
    printf("Enter how many students you want: ");
    scanf("%d", &n);
    struct student s[n];
    printf("\nEnter student details:\n");
    for (i = 0; i < n; i++) 
    {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter phone number: ");
        scanf("%s", s[i].phone);
        printf("Enter branch: ");
        scanf("%s", s[i].branch);
        printf("Enter year of joining: ");
        scanf("%d", &s[i].obj.year);
        printf("Enter month of joining: ");
        scanf("%d", &s[i].obj.month);
        printf("Enter day of joining: ");
        scanf("%d", &s[i].obj.day);
    }
    printf("\nThe details of the students are:\n");
    for (i = 0; i < n; i++) 
    {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Phone Number: %s\n", s[i].phone);
        printf("Branch: %s\n", s[i].branch);
        printf("Year of joining: %d\n",s[i].obj.year);
        printf("Month of joining: %d\n",s[i].obj.month);
        printf("Day of joining: %d\n",s[i].obj.day);
    }
    return 0;
}
