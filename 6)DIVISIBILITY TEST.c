#include<stdio.h>

int main()
{ 
    int num;
    printf("Enter the number \n");
    scanf("%d", &num);
    printf("CHECK The below number,if it is zero then it is divisible by 7 or else not \n");
    printf("The number is %d \n", num%7);
    printf("Also, The above number which you got is the remainder");

    return 0;
}

// % SIGN --> Gives us the remainder

