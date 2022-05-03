#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number\n");
	scanf("%d",&a);

	if(a%2==0)
	{
	printf("The number is EVEN\n",a);	
	}
	else
	{
		printf("The number is ODD",a);
	}
	return 0;
}
