/* C -program to perform linear search in 1D-Array*/
//Done By Dhanush Kumar,CSE-A
#include<stdio.h>
int main()
{
	int a[4]={2,3,5,9},i,key;
	printf("enter the key element\n");
	scanf("%d",&key);
	printf("Search the entire array\n");
	for(i=0;i<4;i++)
	{
		if(a[i]==key)
		{
			printf("search is successful\n");
			printf("element found in location %d\n",i);
		}
	}
	return 0;
}
