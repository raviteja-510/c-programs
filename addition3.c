#include<stdio.h>
void main()
{
	float a,b,c,sum,average;
	printf("enter the 3 values");
	scanf("%f%f%f", &a, &b, &c);
	sum=a+b+c;
	printf("the sum of the numbers is %f",sum);
	average=sum/3;
	printf("\n the average of the  numbers is %f",average);
	
}
