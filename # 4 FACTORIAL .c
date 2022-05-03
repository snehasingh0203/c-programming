// WAP TO PRINT FACTORIAL OF ANY NUMBER :-

#include<stdio.h>
int main()
{
    int a = 0, s, factorial = 1;
    
    printf("Enter the number you wish to find the factorial of: \n");
    scanf("%d", &s);

  for(a = 1; a <= s; a++)
  
  {
  	factorial*= a;
  }
     printf("Factorial of %d is %d\n", s,factorial);
	return 0;
}
 
