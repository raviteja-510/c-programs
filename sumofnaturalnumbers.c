#include<stdio.h>
int main()
{
	int i=1,n,sum=0;
	printf("enter the number=");
	scanf("%d", &n);
	while(i<=n)
	{
		sum+=i;
		i=i+1;
		
	
	}
	 printf("%d", sum);
	 
	 return 0;
}
