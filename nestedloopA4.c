#include<stdio.h>
int main()
{
	int i,j,n,k=0;
	scanf("enter the value of n=");
	for(i=1;i<=n;i++);
	{
		for(j=1;j<=i-1;j++,k=0)
		{
			printf("%d ",j);
		}
		while(k!=2*i-1)
		{
			printf("%d",i);
			k=k+1;
			
		}
		
		printf("\n");
		
	}
	return 0;
}



