#include<stdio.h>
int main()
{
	float pay,tax=0;
	printf("enter annual pay\n");
	scanf("%f",&pay);
	
	if(pay>=250000 && pay<=500000)
	{
		tax = tax + 5/100*(pay-250000);
	}
		if(pay>500000 && pay<=1000000)
	{
		tax = tax + 20/100*(pay-500000);
	}
		if(pay<1000000)
	{
		tax = tax+ 30/100*(pay-1000000);
	}
	printf("The tax to be paid is %f",tax);
	return 0;
}
