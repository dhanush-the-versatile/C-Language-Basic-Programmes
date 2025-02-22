/* C-program to check whether the given number is palindrome or not */
// Done By Dhanush Kumar, CSE-A
#include <stdio.h>
int main() 
{
    int n, sum = 0, temp, r;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
	 {
        r = n % 10; 
        sum = sum * 10 + r;
        n = n / 10; 
    }
    if (temp == sum)
        printf("It is a palindrome\n");
    else
        printf("It is not a palindrome\n");
		 return 0;
}

