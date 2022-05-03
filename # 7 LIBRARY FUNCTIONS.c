// USE THE LIBRARY FUNCTIONS TO CALCULATE THE AREA OF A SQUARE WITH SIDE a ----------------

#include<stdio.h>
#include<math.h>

int main()
{
	int side;
	printf("ENTER THE SIDE LENGTH : ");
	scanf(" %d", &side);
	printf("THE AREA OF THE SQUARE IS %f", pow(side,2));    
	// HERE ,we have used %f , because pow is a float 
	return 0;
}
