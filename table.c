
#include<stdio.h>
int main()
{
	int i=1,n;
	printf("enter the number=");
	scanf("%d", &n);
	while(i<=10)
	{
		printf("%d*%d=%d\n", n, i, n*i);
		i=i+1;
	}
	 
	 return 0;
	
	}
