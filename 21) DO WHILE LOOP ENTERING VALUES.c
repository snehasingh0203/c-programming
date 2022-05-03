#include <stdio.h>

int main ()
{
  int n, i = 0;
  printf ("enter the value of n \n");
  scanf ("%d", &n);
  do
    {
      printf ("the number is %d \n", i+1);
      i++;
    }
  while (i < n);


  return 0;
}


