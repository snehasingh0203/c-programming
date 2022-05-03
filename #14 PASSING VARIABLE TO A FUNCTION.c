#include<stdio.h>

void printadd(int a)
{
	printf("Address of variable a is %u\n", &a);
}
 
int main()
{
	int i = 4 ;
	printf("Value of variable i is %d\n", i);
	printadd(i);
	printf("Address of variable i is %u", &i);
	
	return 0;
} 
