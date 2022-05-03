#include<stdio.h>  
int main()
{    
       int a, s, l = 0, k = 0;    
       printf("Enter the number to check prime:");    
       scanf("%d",&a);    
           
       l = a/2;
      
       for(s=2; s <= l; s++)    
       {    
       if(a%s==0)    
       
	     {    
       printf("Number is NOT prime, HENCE IT IS COMPOSITE");    
       k=1;    
       break;    
           }    
       }  
	   
       if(k==0)    
       printf("Number is prime");     
       return 0;  
       }    
