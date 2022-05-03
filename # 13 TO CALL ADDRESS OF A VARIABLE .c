#include<stdio.h>
int main()
{
	int a=9 ;
	int *ptr;
	ptr = &a;
	
	printf("Address of variable is %u\n", &a);
	printf("Address of variable is %u\n", ptr);
	printf("Value of variable is %u", *ptr);
	
	return 0;
} 
