// ARRAYS INPUT ----------------------

// ARRAYS CAN STORE MULTIPLE VALUE IN A SINGLE VARIABLE

#include<stdio.h>
int main()
{
	int marks[4]; // ALLOCATES SPACE FOR 4 INTEGERS
	
	printf("ENTER THE VALUE OF MARKS FOR STUDENT 1 : ");
	scanf("%d", &marks[0]);
	printf("ENTER THE VALUE OF MARKS FOR STUDENT 2 : ");
	scanf("%d", &marks[1]);
	printf("ENTER THE VALUE OF MARKS FOR STUDENT 3 : ");
	scanf("%d", &marks[2]);
	printf("ENTER THE VALUE OF MARKS FOR STUDENT 4 : ");
	scanf("%d", &marks[3]);
	
	printf(" THE MARKS ARE %d , %d , %d and %d", marks[0],
	marks[1], marks[2], marks[3]);
	 
	return 0;
}
