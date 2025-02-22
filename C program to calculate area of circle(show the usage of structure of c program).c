/*C-Program for Calculating Area of Circle*/
//Done By Dhanush Kumar,CSE-A
//Dated 31-08-2024
#define PI 3.14
int radius=5;
#include<stdio.h>
#include<math.h>
int main()
{
	int areac=0;
	circle();
	return 0;
}
circle()
{
	int areac=0;
	areac=PI*radius*radius;
	printf("The Area Of Circle is %d",areac);
}
