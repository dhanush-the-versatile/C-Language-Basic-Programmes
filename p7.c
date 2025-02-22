/* C program To Find The sum And Average Of 3 Numbers*/
//Done By Dhanush Kumar,CSE-A
#include<stdio.h>
int main()
{
	int A,B,C,Sum=0,Avg=0;
	printf("Enter The Values Of A,B,C");
	scanf("%d%d%d",&A,&B,&C);
	Sum=A+B+C;
	Avg=Sum/3;
	printf("The Sum is %d",Sum);
	printf("The Average is %d",Avg);
	return 0;
}
