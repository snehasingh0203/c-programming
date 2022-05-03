// DISPLAY A FUNCTION TO CALL OTHER FUNCTIONS -------------

#include<stdio.h>
void hey();
void hi();
void doin();

int main()
{
  hey(); // TO MAKE A FUNCTION CALL ANOTHER FUNCTION , THE CALLER FUNCTION MUST BE INSIDE THE MAIN FUNCTION
  hi();
  return 0;
}
void hey(){
	printf("heyaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa \n");
      doin();     // HERE, hey() function is calling doin() function
	 }
void hi()
{
	printf("hi \n");
}
void doin()
{
	printf("how you doin \n");
}
