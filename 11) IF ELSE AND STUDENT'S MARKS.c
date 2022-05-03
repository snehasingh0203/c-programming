#include<stdio.h>
int main()
{
	int p,c,m,total;
	printf("enter p ");
	scanf("%d",&p);
	printf("enter c ");
	scanf("%d",&c);
	printf("enter m ");
	scanf("%d",&m);
	total= (p+c+m)/3;
	
	if ((p>33) && (c>33) && (m>33) && (total>=40) )
	{
		printf("she is pass in all the main subjects with %d percentage \n",total);
		}
	else
	{	
		printf("she failed in the examination with %d percentage \n",total);
	}
	
	
	return 0;
	
}
