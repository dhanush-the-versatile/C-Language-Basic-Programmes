/* C-program to generate a grade sheet 
based on the marks enetered */
//Done By Dhanush Kumar,CSE-A
#include<stdio.h>
int main()
{
	int marks;
	printf("Enter Your Marks\n");
	scanf("%d",&marks);
	switch(marks/10)
	{
		case 9: printf("You Got A+ Grade");break;
		case 8: printf("You Got A Grade");break;
		case 7: printf("You Got B Grade");break;
		case 6: printf("You Got C Grade");break;
		case 5: printf("You Got D Grade");break;
		case 4: printf("You Got E Grade");break;
		deafult : printf("You are FAILED");break;
	}
	return 0;
}
