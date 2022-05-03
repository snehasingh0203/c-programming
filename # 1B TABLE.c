// WAP TO PRINT MULTIPLICATION TABLE OF ANY NUMBER :-

#include<stdio.h>
int main()

{
    int a , s = 1;
    
    printf("THE TABLE OF ANY NUMBER CAN BE WRITTEN AS : \n\n");
    printf(" Enter the Number : ");
 
    scanf("%d", &a);
       printf("\n");
    while (s <= 10)
    {
        printf("%d x %d = %d \n ", a, s, a * s);
        s++;
    }
    return 0;
}
