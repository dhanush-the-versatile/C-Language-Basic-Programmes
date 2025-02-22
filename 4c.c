/*C-Program To Find The Average and 
The Total of 5 Subject marks*/
//Done By Dhanush Kumar,CSE-A
#include<stdio.h>
int main()
{
	int sub1,sub2,sub3,sub4,sub5,Total=0,Avg=0;
	printf("Enter The Marks Of Subject 1 ");
	scanf("%d",&sub1);
	printf("Enter The Marks Of Subject 2 ");
	scanf("%d",&sub2);
	printf("Enter The Marks Of Subject 3 ");
	scanf("%d",&sub3);
	printf("Enter The Marks Of Subject 4 ");
	scanf("%d",&sub4);
	printf("Enter The Marks Of Subject 5 ");
	scanf("%d",&sub5);
	Total=sub1+sub2+sub3+sub4+sub5;
	Avg=(Total)/5;
	printf("Total Marks is %d",Total);
	printf("Average is %d",Avg);
	return 0;
} 
