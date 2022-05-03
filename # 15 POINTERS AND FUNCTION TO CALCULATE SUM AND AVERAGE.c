//FIND SUM AND AVERAGE OF NUMBERS USING FUNCTIONS AND POINTERS

#include<stdio.h>

void sumandavg(int a, int s, int *sum, float *avg)
{
	 *sum = a +s;
	 *avg = (float)  (*sum) /2;
}
 int main()
 {
    int i, j, sum;
    float avg;
    i = 3;
    j = 6;
    sumandavg(i,j, &sum, &avg);
     printf( " Value of sum is  %d\n", sum);
     printf( " Value of avg is  %f \n", avg);
    return 0;
 }
  
