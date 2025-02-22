/*C-program to generate a grade sheet based on the
marks entered by using switch statement*/
//Done By Dhanush Kumar,CSE-A
#include<stdio.h>
int main() 
{
    int marks;
	printf("Enter your marks 0 to 100 ");
    scanf("%d",&marks);
    int grade_case;
    if (marks >= 90 && marks <= 100) {
        grade_case = 1; 
    } else if (marks >= 80 && marks < 90) {
        grade_case = 2; 
    } else if (marks >= 70 && marks < 80) {
        grade_case = 3; 
    } else if (marks >= 60 && marks < 70) {
        grade_case = 4; 
    } else if (marks >= 50 && marks < 60) {
        grade_case = 5;
    } else if (marks >= 40 && marks < 50) {
        grade_case = 6;
    } else if (marks >= 0 && marks < 40) {
        grade_case = 7;
    } else {
        printf("Please enter correct marks between 0 and 100 - invalid marks\n");
        return 1;
    }
    switch (grade_case) 
	{
        case 1:
            printf("You got A+ Grade\n");
            break;
        case 2:
            printf("You got A Grade\n");
            break;
        case 3:
            printf("You got B Grade\n");
            break;
        case 4:
            printf("You got C Grade\n");
            break;
        case 5:
            printf("You got D Grade\n");
            break;
        case 6:
            printf("You got E Grade\n");
            break;
        case 7:
            printf("You have FAILED\n");
            break;
    }
	return 0;
}
