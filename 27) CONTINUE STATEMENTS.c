#include<stdio.h>
int main()
{
	int s=5;
	int i=0;
	while(i<10)
	{
		i++;
		if(i!=s)
		{
			continue;
	      }
		else
		{
			printf("%d \n",i) ;	
		}
	}
	return 0;
}
/* CONTINUE STATEMENTS 
WE GOT THE OUTPUT AS 5, BECAUSE TILL THEN LINE NO.5 (IF STATEMENT) WAS TRUE & THUS,
THE ELSE LINE WAS SKIPPED BY THE COMPILER AS THE CONITNUE STATEMENT SKIPS OR IGNORES EVERYTHING
WRITTEN BELOW IT. AND, WHEN IT(THE ELSE STATEMENT) BECAME TRUE, THE ELSE STATEMENT WAS 
READ AND THE OUTPUT GOT PRINTED.*/
