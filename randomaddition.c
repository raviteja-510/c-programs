#include<stdio.h>
int main()
{ 
    int a,i=1,sum=0;
    
    while(i<=5)
    {
    	scanf("%d",&a);
    	sum=sum+a;
    	i=i+1;
    	
	}
	 printf("sum=%d", sum);
	 return 0;
}
