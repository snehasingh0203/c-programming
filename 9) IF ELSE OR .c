#include<stdio.h>
 int main()
 { 
 int age;
 printf("Enter the student's age\n");
 scanf("%d",&age);
 
 if((age<=4) || (age==5))
 {
 	printf("The student can get admission in kindergarden \n",age);
 }
 else
 {
 	printf("The student cannot get admission in kindergarden \n",age);
 }
return 0;
 }

