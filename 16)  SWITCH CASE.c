#include<stdio.h>
int main()
{
	int marks;
	printf("Enter marks\n");
	scanf("%d",&marks);
	
	switch(marks/10)
	{
		case 10 : 
		
		case 9:
		printf("GRADE A\n");
		break;
		case 8:
		printf("GRADE B\n");
		break;
		case 7:
		printf("GRADE C\n");
		break;
		case 6:
		printf("GRADE D\n");
		break;
		case 5:
		printf("GRADE E\n");
		break;
		default: 
		printf("HE FAILED"); 	
	}
	
	return 0;
}
