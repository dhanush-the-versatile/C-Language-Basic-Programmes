/* C -program to find the min,max in a 1D Array*/
//Done By Dhanush Kumar,CSE-A
#include<stdio.h>
int main() 
{
    int n, i;
    int min, max;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
	int a[n];
    printf("Enter the values of the array: ");
    for(i = 0; i < n; i++) 
	{
        scanf("%d", &a[i]);
    }
    min = a[0];
    max = a[0];
    for(i = 1; i < n; i++) 
	{
        if(a[i] < min) 
		{
            min = a[i]; 
        }
        if(a[i] > max) 
		{
            max = a[i];
        }
    }
    printf("Minimum value in the array: %d\n", min);
    printf("Maximum value in the array: %d\n", max);
	return 0;
}

