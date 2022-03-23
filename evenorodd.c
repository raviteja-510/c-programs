#include<stdio.h>
void main()
{
	int num;
	printf("enter the value of number=");
	scanf("%d", &num);
	(num%2==0) ? printf("the number is even") : printf("the number is odd");
}
