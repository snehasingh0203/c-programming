#include<stdio.h>
int main () 
{
int n;
printf("Enter the number\n");
scanf("%d",&n);
printf("The numbers in reverse order is as follow:-\n");
    while(n>=1)
    {
        printf("%d\n",n);
        n--;
}
	return 0;
}
