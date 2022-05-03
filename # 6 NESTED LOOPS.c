// WAP TO PRINT AN UPSIDE DOWN PYRAMID '*' PATTERN UPTO NTH ROW -----
#include<stdio.h>
int main()
{
int N,i,j;
printf("Enter a value : \n");
scanf("%d", &N); 

for(i=N; i>0; i--)
  {
  for(j=0; j<i; j++)
    {
printf("*");
    }
printf("\n");
  } 
  return 0;
}

