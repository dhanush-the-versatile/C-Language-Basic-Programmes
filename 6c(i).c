/*C-program to compute sine series*/
//Done By Dhanush kumar,CSE-A
#include<stdio.h>
#include<math.h>
#define PI 3.14
void main()
{
	float angle,x,output;
	printf("enter angle");
	scanf("%f",&angle);
	x=PI/180*angle;
	output=sin(x);
	printf("The Sine Value is %f",output);
}
