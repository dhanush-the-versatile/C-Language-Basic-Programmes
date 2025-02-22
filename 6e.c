/*C-Program to find if the given year is leap or not*/
// Done By Dhanush Kumar, CSE-A
#include<stdio.h>
int main()
{
    int year;
    printf("Enter the Year: ");
    scanf("%d",&year);
    if (year%100==0) 
	{
        if (year%400==0)
            printf("The year %d is a leap year\n",year);
        else
            printf("The year %d is not a leap year\n",year);
    } else {
        if (year%4==0)
            printf("The year %d is a leap year\n",year);
        else
            printf("The year %d is not a leap year\n",year);
    }
    return 0;
}
