/* C-program to delete the duplicate elements*/ 
//Done By Dhanush Kumar,CSE-A
#include <stdio.h>
int main() 
{
    int n, i, j, k;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
	int arr[n];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
	 {
        for (j = i + 1; j < n; j++)
		 {
            if (arr[i] == arr[j]) 
			{
                for (k = j; k < n - 1; k++) 
				{
                    arr[k] = arr[k + 1];
                }
                n--; 
                j--;  
            }
        }
    }
    printf("Array after removing duplicates: ");
    for (i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
	return 0;
}

