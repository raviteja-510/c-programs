#include<stdio.h>
int main()
{
	int n,d,sum=0,c;
	printf("enter the number=");
	scanf("%d", &n);
	c=n;
	while(n>0)
	{
		d=n%10;
sum=sum*10+d;
		n=n/10;
		
	}
	
	 if(sum==c)
	 {
	 	printf("the given number is a palyndrome");
	 }
	 else
	 {
	 	printf("not a palyndrome");
	 }
	
	}
