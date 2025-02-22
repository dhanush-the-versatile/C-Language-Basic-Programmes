/*C-Program to add two 2x2 matrices*/
// Done by Dhanush Kumar, CSE-A
#include <stdio.h>
void main() 
{
    int a[2][2], b[2][2], c[2][2], i, j;
    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < 2; i++) 
	{
        for (j = 0; j < 2; j++) 
		{
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < 2; i++) 
	{
        for (j = 0; j < 2; j++) 
		{
            scanf("%d", &b[i][j]);
        }
    }
    printf("Sum of the two matrices:\n");
    for (i = 0; i < 2; i++) 
	{
        for (j = 0; j < 2; j++) 
		{
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Resultant matrix after addition:\n");
    for (i = 0; i < 2; i++) 
	{
        for (j = 0; j < 2; j++) 
		{
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}
