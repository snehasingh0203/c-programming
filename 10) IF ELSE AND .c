#include<stdio.h>
int main ()
{
	int num1,num2,num3,num4;
	printf("Enter num 1\n");
	scanf("%d",&num1);
	printf("Enter num 2\n");
	scanf("%d",&num2);
	printf("Enter num 3\n");
	scanf("%d",&num3);
	printf("Enter num 4\n");
	scanf("%d",&num4);
	if ((num1 > num2) && (num1>num3) && (num1>num4))
	{
		printf("num 1 is the greatest \n");
	}
	else if ((num2 > num1) && (num2>num3) && (num2>num4))
	{
		printf("num 2 is the greatest \n");
	}
		else if ((num3 > num1) && (num3>num2) && (num3>num4))
	{
		printf("num 3 is the greatest \n");
	}
		else
	{
		printf("num 4 is the greatest \n");
	}
	return 0;
}

