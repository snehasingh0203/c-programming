#include<stdio.h>
int main()
{
	int marks;
	printf("Enter marks\n");
	scanf("%d",&marks);
	
	if((91<marks) || (marks==100))
	{
		printf("GRADE A+ : EXCELLENT");
	}
		else if((81<marks) || (marks==90))
	{
		printf("GRADE A : VERY GOOD");
	}
	else if((71<marks) || (marks==80))
	{
		printf("GRADE B+ : GOOD");
	}
	else if((61<marks) || (marks==70))
	{
		printf("GRADE B : AVERAGE");
	}
	else if((51<marks) || (marks==60))
	{
		printf("GRADE C : BELOW AVERAGE");
	}
	else if((40<=marks) || (marks==50))
	{
		printf("GRADE D : JUST PASS");
	}
	else if((1<marks) || (marks==39))
	{
		printf("GRADE E : FAIL");
	}
	return 0;
}
