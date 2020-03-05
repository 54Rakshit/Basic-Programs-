/*Aceept the Number from user and check whether it is Balanced or Not...!!!

>>>>>Balanced number is such a number where  EVEN count==ODD count

=====Input==============================Output==============
No=5278                            It is balanced

No=1111                            It is not balanced

No=2222                            It is not balanced

No=2772                            It is balanced
============================================================

*/




#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;


BOOL Balanced_Or_Not(int No)
{
	int digit, count=0;

	if(No<0)
		No=-No;

	while(No!=0)
	{
		digit=No%10;
		
		if(digit%2==0)
			count++;
		else
			count--;

		No=No/10;
	}
	if(count==0)
		return TRUE;
	else
		return FALSE;

}
int main()
{
	int value=0;
	BOOL bReturn=FALSE;

	printf("Enter the number ==>>");
	scanf("%d",&value);

	bReturn=Balanced_Or_Not(value);
	
	if(bReturn==TRUE)
		printf("It is balanced\n");
	else
		printf("It is not balanced\n");
}