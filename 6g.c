/*C-program to Construct a pyramid of numbers*/
//Done By Dhanush Kumar,CSE-A
#include <stdio.h>
int main() 
{
    int n, i, j, t = 1;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) 
	{
        for(j = 1; j <= (n - i); j++) 
		{
            printf(" ");
        }
        for(j = 1; j <= i; j++) 
		{
            printf("%d ", t);
            t++;
        }
        printf("\n");
    }
	return 0;
}

