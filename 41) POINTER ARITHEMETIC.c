// POINTER ARITHEMETIC -----

#include<stdio.h>
int main()
{ 
	int i = 30;
	int *ptr = &i;
	printf("The value of ptr is %u \n", ptr);
	ptr++;   // THIS ADDS 4 TO THE ABOVE VALUE
	ptr++;  // AS, 1 INTEGER = 4 BYTES (NOT MANDATORY)
	
	ptr = ptr + 1;
	printf("The value of ptr is %u \n", ptr);
//ptr = ptr + 1; Here, ptr is int so it will add 4 in the memory
 
// THIS ADDS THE NUMBER OF BYTES CONTAINED IN THAT TYPE OF 
// INTEGER.FOR EG; IF in place of integer char was present then
// ptr = ptr + 1 will add 1 , to the ptr value

	char s = 34;
	char *ptr_ptr = &s;
	printf("The value of ptr is %u \n", ptr_ptr);
	ptr_ptr = ptr_ptr + 1;
	return 0;
}
