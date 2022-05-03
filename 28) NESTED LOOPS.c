// -------------------------------------- NESTING OF LOOPS -----------------------------
// NESTING OF LOOPS MEANS THAT A LOOP IS RESIDING INSIDE ANOTHER LOOP. (MAINLY USED TO PRINT A '*' PATTERN)

#include<stdio.h>
int main()
{
	int a,n,s;
	printf("ENTER A VALUE \n");
	scanf("%d",&n);
for(s=1 ; s<=n ; s++);
{	
	for(a=1; a<=n ; a++)
	{
		printf("*");
	}
}
	return 0;
	
}

