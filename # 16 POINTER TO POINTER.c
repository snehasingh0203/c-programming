// POINTER TO POINTER ---

#include<stdio.h>
int main()
{
	 int i = 234; 
	 int *ptr;
	 int **ptr_ptr;
	 
	 ptr = &i;
	 ptr_ptr = &ptr;
	 
	 printf("VALUE OF i is %d", **ptr_ptr);
	 
	return 0 ;
}
