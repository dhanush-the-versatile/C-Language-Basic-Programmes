/* C program to calculate Area Of Circle and semi circle*/
//Done By Dhanush Kumar,CSE-A
#include<stdio.h>
int main()
{
	float radius,area_of_circle,area_of_semicircle;
	printf("Enter the radius of the circle:");
	scanf("%f",&radius);
	area_of_circle=3.14*radius*radius;
	area_of_semicircle=0.5*area_of_circle;
	printf("The Area of circle is %f",area_of_circle);
	printf("The area of semi circle is %f",area_of_semicircle);
	return 0;
}
