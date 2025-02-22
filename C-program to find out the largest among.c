/* C-program to find out the largest among
 three numbers using ternary operators*/
 //Done By Dhanush Kumar,CSE-A
 #include<stdio.h>
 int main()
 {
 	int a,b,c;
 	printf("Enter the values of a,b,c");
 	scanf("%d%d%d",&a,&b,&c);
 	((a>b)&&(a>c))?printf("a is greater"):(b>c)?printf("b is greater"):printf("c is greater");
 	return 0;
 }
