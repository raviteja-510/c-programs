#include<stdio.h>
void main()
{
	char ch;
	printf("enter any charecter");
	scanf("%c",&ch);
	if(ch>=65 && ch<=90)
	{
		ch=ch+32;
		printf("%c",ch);
	}
	else
	{
		ch=ch-32;
		printf("%c",ch);
	}
}
