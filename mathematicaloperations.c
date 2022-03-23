#include<stdio.h>
void main()
{
	float a,b,sum,subtraction,multiplication,division;
	printf("enter the values of a,b");
	scanf("%f%f", &a ,&b);
	sum=a+b;
	printf("the sum of the numbers is %f", sum);
	subtraction=a-b;
	printf("\nthe subtraction of the numbers is %f", subtraction);
	multiplication=a*b;
	printf("\nmultiplication of the two numbers is %f", multiplication);
	division=a/b;
	printf("\ndivision of the numbers is %f", division);
	
}
