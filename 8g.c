/* Program to implement sorting*/
//Done by Dhanush Kumar, CSE
#include <stdio.h>
int main() 
{
    int a[10], i, j, n, temp;
     printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter elements into the array:\n");
    for (i = 0; i < n; i++) 
	{
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++)
     {
        for (j = i + 1; j < n; j++)
         {
            if (a[i] > a[j]) 
			{
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("The sorted elements in the array are: ");
    for (i = 0; i < n; i++)
     {
        printf("%d ", a[i]);
    }
    printf("\n");
     return 0;
}
