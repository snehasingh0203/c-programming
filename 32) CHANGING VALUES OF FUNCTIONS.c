// CHANGING VALUES OF FUNCTIONS --------

#include<stdio.h>
void change (int a);

int main()
{
	int b = 323;
	printf("The value of b before change is %d \n",b);
	change(b);
	printf("The value of b after change is %d",b);
	return 0;
}
void change (int a)
{                           // THE VALUE OF b DOES NOT CHANGE BECAUSE A COPY OF b IS PASSED TO CHANGE FUNCTION
	a = 6996;
}

