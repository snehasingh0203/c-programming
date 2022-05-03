//               ------------------------     POINTERS  --------------------------

#include<stdio.h>
int main()
{
	int i = 8;
	int *j = &i; // j will store the address of i
	printf("THE value of i is %d\n",i);	
	printf("THE value of i is %d\n",*j);	
	printf("THE value of j is %u\n", *(&j));	
	
	
	printf("THE address of i is %u\n", &i);	
	printf("THE address of i is %u\n", j);	
	printf("THE address of j is %u\n", &j);	
	
	
	return 0;
}
