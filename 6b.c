/*C-program to check whether the given number is prime or not*/
//Done By Dhanush Kumar,CSE-A
#include <stdio.h>
int main() 
{
	int i,num,c=0;
	printf("Enter a number");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			c++;
		}
	}
	if(c==2)
	printf("%d is Prime number",num);
	else
	printf("%d is not prime number",num);
	return 0;
}

