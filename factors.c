#include<stdio.h>
int main()
{
	int n,i=1;
	printf("enter the number=");
	scanf("%d", &n);
	while(i<=n)
	{
      if(n%i==0)
      
      {
      	printf("the factors are %d\n", i);
      
	  }
	  i=i+1;
	}
	 
	 return 0;
	
	}
