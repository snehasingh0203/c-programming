#include <stdio.h>
#include<math.h>

int main()
{
    printf("10 when divided by 4 leaves a remainder of %d \n", 10%4);
    printf("-10 when divided by 4 leaves a remainder of %d \n", -10%4);
    printf("10 when divided by -4 leaves a remainder of %d \n", 10%-4);
    
    printf("value of 2 to the power 5 is %f \n", pow(2,5)); 
	/*ye sahi hai aur sirf iss line ko execute krne ke liye #include<math.h> ka use krnge */
    
    return 0;
}

/* printf("the value of 4*5 is %d \n" ,(4)(5)); ye galat hai kyuki hmlog c language mei brackets ko multiplication
ka sign nhi smjhte hai
 printf("value of 4^5 is %f \n", 4^5); ye galat hai kyuki c language mei ^ mtlb to the power nnhi hota hai 
 aur isko use krte samay hmlog %f ka hi use krnge %d ka use nhi krnge kyuki ye ek real value deta hai */



