#include<stdio.h>
int main()
{
	int a;
	printf("Enter age\n");
	scanf("%d",&a);

	if(a>=18)
	{
	printf("The  person can drive\n",a);	
	}
	else
	{
		printf("The person cannot drive",a);
	}
	return 0;
}
