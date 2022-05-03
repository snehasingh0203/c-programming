#include<stdio.h>
 float conversion(float celsius)
{
 	return ((celsius * (9.00/5.00) )+ 32);
}
int main()
{
    float tempf,tempc;
    printf(" ENTER THE TEMPERATURE IN CELSIUS : \n");	
    scanf("%f",&tempc);
    tempf = conversion(tempc);
    printf("TEMPERATURE IN FAHRENHEIT IS : %f",tempf);
    return 0;
 }

