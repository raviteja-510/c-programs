#include<stdio.h>
int main()
{
	int n,i=1,sum=0;
	printf("enter the number=");
	scanf("%d",&n);
	while(i<=n)
	{
		i=i*i;
		sum=sum+i;
		i=i+1;
	}
	
	printf("sum=%d",sum);
	
	return 0;
}
