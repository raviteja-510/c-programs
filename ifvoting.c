#include<stdio.h>
int main()
{
	int age;
	printf("enter the age of the person=");
	scanf("%d", &age);
	if(age>=18)
	{
		printf("the person is eligible for voting");
	}
	if(age<18)
	 {
	   printf("the person is not eligible for voting");
  }
	  return 0;
}
