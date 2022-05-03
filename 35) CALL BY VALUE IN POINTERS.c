//  -------- CALL BY VALUE IN POINTERS  ----

#include<stdio.h>
int sum (int a, int s);
int main()
{
   int a = 4 , s = 7;
   printf("The value of a and s is %d and %d\n", a,s);	
   printf("The value of 4+7 is %d\n", sum(a,s));	
   printf("The value of a and s after function call is %d and %d\n", a,s);	
return 0;
}

int sum (int a , int s )
{
int d ;
d = a + s;    // THE NUMBER WILL NOT CHANGE AFTER FUNCTION CALL B/C  
s = 3434;     // IN CALL BY VALUE IT SENDS THE COPY OF THE VARIABLE AND 
a = 23432;    // A COPY DOES NOT AFFECT  THE REAL VALUE
return d;
}
