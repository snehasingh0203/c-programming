#include<stdio.h>
 float totalling(float numbers);

int main()
{
    float n,total;
    printf(" ENTER THE NUMBER : \n");	
    scanf("%f",&n);
    total = totalling(n);
    printf("SUM OF NUMBERS IS %f",total);
    return 0;
 }
 
float totalling(float numbers)
 
 {
  if (numbers != 0)
    return numbers + totalling(numbers - 1);
  else
    return numbers;
}
