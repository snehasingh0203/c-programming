/* WAP TO PRINT THE SUM OF FIRST 10 NATURAL NUMBERS USING :-
C) FOR LOOP                                                                                       */

#include <stdio.h>
int main()
 {
    int a =10, s, sum = 0;
    for (s = 1; s <= a; s++)
     {
        sum = sum+s;
     }

    printf("THe SUM OF FIRST 10 NATURAL NUMBERS IS  %d",sum);
    return 0;
}
