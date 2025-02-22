/* C program to implement transpose of a matrix*/
// Done by Dhanush Kumar,CSE-A
#include <stdio.h>
void main() 
{
    int matrix[2][2], transpose[2][2], i, j;
    printf("Enter the matrix (2x2):\n");
    for (i = 0; i < 2; i++) 
    {
        for (j = 0; j < 2; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < 2; i++) 
    {
        for (j = 0; j < 2; j++) 
        {
            transpose[j][i] = matrix[i][j];
        }
    }
    printf("Transpose of the matrix:\n");
    for (i = 0; i < 2; i++) 
    {
        for (j = 0; j < 2; j++) 
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}
