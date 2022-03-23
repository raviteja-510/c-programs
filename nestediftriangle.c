#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the values");
	scanf("%d%d%d", &a, &b, &c);
	if(a==b)
	{
		if(b==c)
		{
			printf("the triangle is equilateral");
		}
		else{
			printf("the traingle is isosceles");
		    }
	}
	else{
		   if(b==c)
		   {
		   	printf("the traingle is isosceless");
		   }
		   else
		   {
		   	printf("the traingle is scalen");
		   }
	    }
	     return 0;
}
