#include<stdio.h>
void main()
{
	int age ;
	printf("enter the age of the person=");
	scanf("%d", &age);
	(age>=18) ? printf("the person is eligible for voting") : printf("the person is not eligible for voting");
}
