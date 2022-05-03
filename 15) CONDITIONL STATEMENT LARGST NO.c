#include <stdio.h>
int main()
{

int n1 ,n2 ,n3 ,n4 , max;

 printf ("enter the value of n1 \n");
  scanf ("%d", &n1); 

  printf ("enter the value of n2 \n");
  scanf ("%d", &n2);

   printf ("enter the value of n3 \n");
  scanf ("%d", &n3);

   printf ("enter the value of n4 \n");
  scanf ("%d", &n4);

max = (n1 > n2 && n1 > n3 && n1 > n4) ?
n1 : ((n2 > n3 && n2 > n4) ? n2 :(n3 > n4 ? n3 : n4));

printf("Largest number among %d, %d, %d and %d is %d",n1, n2, n3, n4,max);

	return 0;
}




