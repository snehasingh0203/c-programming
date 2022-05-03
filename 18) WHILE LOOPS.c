#include <stdio.h>

int main ()
{
  int a;
  printf ("enter the value of a \n");	
  scanf ("%d", &a);
  while (a < 100)     /* while loop tb hi work krega jb YE condtion true ho */

    /* jb condtion false hoga tb kuch bhi execute nhi hoga
       agr condtion kbhi false nhi hua tb program execute hote hi rhega aur aisa loop ko hmlog 
       INFINITE LOOP bolte hai.
       FOR EXAMPLE : while(a>100); */
    {
      printf ("%d\n", a);
      a++;
    }

  return 0;
}


