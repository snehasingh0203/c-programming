// WAP TO FIND AVERAGE OF 3 NUMBERS USING FUNCTIONS ---------------------------

#include<stdio.h>
float average(int a, int s, int u);

 int main()
 {
    int a, s, u;
    printf(" ENTER THE VALUE OF a, s and u: \n");	
    scanf("%d\n",&a);
    scanf("%d\n",&s);
    scanf("%d",&u);
    printf("AVERAGE IS : %f", average(a,s,u));
    return 0;
 }
  float average(int a, int s, int u)
{
   float result;
  result = (float)(a + s + u)/3;
  return result;
}
