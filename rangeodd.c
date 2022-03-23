#include<stdio.h>
int main()
{
	int i,m,n;
	printf("enter values of m and n");
	scanf("%d%d", &m, &n);
	i=m;

	
		if(i%2==0)
		{
			i=i+1;
				printf("%d\n", i);
		         i=i+2;
		         while(i<=n)
		         {
		         	printf("%d\n",i);
		         	i=i+2;
				 }
		}
		if(i%2==1)
		{
			
			
			while(i<=n)
			{
				printf("%d\n", i);
		         i=i+2;
			}
		}
	
	
	 return 0;
	 
}
