#include<stdio.h>
void main()
{
	int num1,num2;
	printf("enter the value of num1=");
	scanf("%d", &num1);
	printf("enter the value of num2=");
	scanf("%d", &num2);
	num1=++num2;
	printf("the pre increment values of num1 and num2 are %d\t,%d", num1,num2);
}
