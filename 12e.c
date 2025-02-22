/* C-program to implement ackerman function using recursion*/
//Done By Dhanush Kumar
#include <stdio.h>
int ackermann(int m, int n);
int main() 
{
    int m, n;
    printf("Enter the values of m and n: ");
    scanf("%d%d",&m,&n);
    printf("Ackermann(%d, %d) = %d\n", m, n, ackermann(m, n));
	return 0; 
}
int ackermann(int m, int n) 
{
    if (m == 0) 
	{
        return n + 1;
    } 
    else if (m > 0 && n == 0) 
	{
        return ackermann(m - 1, 1);
    } 
    else if (m > 0 && n > 0)
	 {
        return ackermann(m - 1, ackermann(m, n - 1));
    }
	return 0; 
}


