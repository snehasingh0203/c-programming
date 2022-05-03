#include <stdio.h>

int main ()
{
  int i = 5;
  printf ("the value after i++ is %d \n", i++);

  printf ("the value after i is %d\n", i);

  printf ("the value after ++i is %d\n", ++i);

  i += 10;
  
  printf ("the value after += is %d\n", i);

  return 0;
}

// i++ input mei daala hua value deta hai (pehle value print fir increment)
// ++i input mei +1 add krke output deta hai (pehle increment fir print kre)
// same goes for i-- and --i
// += is a compound assignment operator , i.e add krne ke liye hai 
// same for -= ,  *=  ,  %=  ,  /=   , etc.
// a+=b is expanded into a = a+b, SAME GOES FOR OTHER ABOVE OPERATORS

