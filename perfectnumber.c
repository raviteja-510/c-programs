#include<stdio.h>
int main()
{
	int n,i=1,sum=0;
	printf("enter the number=");
	scanf("%d", &n);
		while(i<n)
	{
		
	if(n%i==0)
		{
   			printf("%d\n",i);
			sum=sum+i;
		}
		
		i++;
	}
	printf("the sum of factors is %d\n",sum);
	
	
	if(sum==n)
	{
		printf("perfect number\n");
	}
	else
	{
		printf("not a perfect number\n");
	}
	 
	 return 0;
}
