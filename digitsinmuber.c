#include<stdio.h>
int main()
{
	int n,a,b,c,d,e,f;
	scanf("%d",&n);
	a=n/7;
	b=n/30;
	c=b/12;
	printf("%dyear %dweeks %dmonths",c,a,b);
	return 0;
}
