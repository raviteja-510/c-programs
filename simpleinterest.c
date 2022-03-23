#include<stdio.h>
void main()
{
	 float p,t,r,simpleinterest;
	 printf("enter the values of p,t,r");
	 scanf("%f%f%f" , &p, &t, &r);
	 simpleinterest=p*t*r/100;
	 printf("the simple interst is %f",simpleinterest);
}
