// ARRAY INPUTS USING LOOPS ------------

#include<stdio.h>
int main()
{
	int marks[5]; // ALLOCATES SPACE FOR 5 INTEGERS
	
	for(int i=0 ; i<5 ; i++)
	{
printf("ENTER THE VALUE OF MARKS FOR STUDENT %d :", i+1);
	scanf("%d", &marks[i]);
      }
      printf("\n");
	for(int i=0 ; i<5 ; i++)
	{
printf("ENTER THE VALUE OF MARKS FOR STUDENT %d : %d\n ",
	 i+1, marks[i]);
      }
	 
	return 0;
}
