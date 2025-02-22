/* C-program to find 2's Complement of a given number*/
//Done By Dhanush Kumar,CSE-A
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int twos_complement = ~num + 1;
    printf("The 2's complement of %d is: %d\n", num, twos_complement);
	return 0;
}
