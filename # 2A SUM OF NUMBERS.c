/* WAP TO PRINT THE SUM OF FIRST 10 NATURAL NUMBERS USING :-
A) WHILE LOOP                                                                                       
B) DO WHILE LOOP
C) FOR LOOP                                                                                          


METHOD 1   _______________________________________________________________________           */

#include<stdio.h>
int main()
{
	int a=1 , s=10 , sum = 0;
	while(a<=s)
	{
		sum = sum + a;
			a++;
	}
	printf("THE SUM OF FIRST TEN NATURAL NUMBERS IS %d", sum);
	return 0;
}



/*  METHOD 2 (A BIT LONG AND COMPLICATED)
 #include <stdio.h>
int main()
 {
    int a = 0,sum=0;
    while (a < 10)
     {
     	if(a<=1);
	     {
	     	 a++;
	     	 sum = sum + a;
	     	   printf("THE FIRST 10 NATURAL NUMBERS IS  %d & THEIR SUM IS = %d\n",a,sum);
	     }
	           
     }
    return 0;
}                                                                                         */            

