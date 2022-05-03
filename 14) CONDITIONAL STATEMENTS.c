#include<stdio.h>
int main()
{
	int num;
	printf("Enter number\n");
	scanf("%d",&num);
	(num>50)? printf("Number is greater than 50\n"):printf("The number is less than 50\n");
	
	printf("Enter number\n");
	scanf("%d",&num);
	(num%2==0)? printf("Number is even"):printf("The number is odd");
	return 0;
}

// THESE ARE CONDITIONAL STATEMENTS.
//THEY ARE ALSO CALLED ONE LINER IF ELSE STATEMENTS.
