/* C-Program to multiply two 2x2 matrices*/
// Done by Dhanush Kumar, CSE-A
#include <stdio.h>
void main() 
{
    int a[2][2], b[2][2], c[2][2]; 
    int i, j, k;
    printf("Enter the first matrix:\n");
    for(i = 0; i < 2; i++) 
	{
        for(j = 0; j < 2; j++) 
		{
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the second matrix:\n");
    for(i = 0; i < 2; i++) 
	{
        for(j = 0; j < 2; j++) 
		{
            scanf("%d", &b[i][j]);
        }
    }
    for(i = 0; i < 2; i++) 
	{
        for(j = 0; j < 2; j++)
		 {
            c[i][j] = 0;
        }
    }
    for(i = 0; i < 2; i++) 
	{
        for(j = 0; j < 2; j++) 
		{
            for(k = 0; k < 2; k++) 
			{
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("Resultant matrix after multiplication:\n");
    for(i = 0; i < 2; i++) 
	{
        for(j = 0; j < 2; j++) 
		{
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}

