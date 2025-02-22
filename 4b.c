/* C-Program To Find Maximum Among Three Numbers*/
//Done By Dhanush Kumar,CSE-A
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter The Values Of a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	((a>b)&&(a>c))?printf("a is greater"):(b>c)?printf("b is greater"):printf("c is greater");
	return 0;
}
