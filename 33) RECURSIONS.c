//  A PROGRAM TO CALCULATE FACTORIALS USING RECURSIONS -------------

#include<stdio.h>

int factorial(int s);
int main()
{
	int a;
	printf("ENTER THE VALUE OF a : \n");
	scanf("%d",&a);
	printf("THE VALUE OF FACTORIAL %d is %d", a, factorial(a));
	return 0;
}

int factorial(int s)
{
	if (s == 1 || s == 0)
	{
	return 1;	
	}
	else
	{
	return s * factorial (s-1);	
	}
}
