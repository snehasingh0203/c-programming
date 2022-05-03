#include <stdio.h>
int main()
{
    float principal,years,interest;
    printf("the principal amount is \n");
    scanf("%f", &principal);
    printf("time for which the interest is to be taken \n");
    scanf("%f" ,&years);
    printf("the rate of interest is \n");
    scanf("%f", &interest);
    float SimpleInterest = (principal*years*interest)/100;
    printf("the simple interest is %f \n", SimpleInterest);
    return 0;
    
}


