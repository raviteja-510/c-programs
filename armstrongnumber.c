#include<stdio.h>
int main()
{
	int c,n,sum=0;
	printf("enter the number=");
	scanf("%d",&n);
	
	while(n=!0)
	{
		c=n%10;
		sum=sum+(c*c*c);
		n=n/10;
		
		
	}
	
	 printf("%d\n",sum);
	 
	 
	 if(n==sum)
	 {
	 	printf("armsrong number");
	 }
	 if(n==!sum)
	 {
	 	printf("not an armstrong number");
	 }
	 return 0;
}
