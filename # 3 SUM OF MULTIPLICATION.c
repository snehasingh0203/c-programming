// WAP TO CALCULATE THE SUM OF THE NUMBERS OCCURING IN THE MULTIPLICATION TABLE OF ANY REQUIRED NUMBER :-

#include <stdio.h>
int main()
{
    int a, s, mult, sum = 0;

    printf("Enter the number you wish to multiply: \n");
    scanf("%d", &a);

    printf("Enter how many times you want to multiply the number: \n");
    scanf("%d", &mult);

    printf("Multiplication is as follows: \n");

  for(s = 1; s <= mult; s++)
  {
      printf("%d X %d = %d\n", a,s,a*s);
      sum = sum + a*s;
  }
 printf("sum = %d", sum);
 
 return 0;
}

