/*Accept number from user and return Largest factor of that number
=========Input=============Output=====================
No=-5                  It is not Prime number 
No=13                  It is Prime number
No=29                  It is Prime number

==============================================================
*/


#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;


int Prime_Or_Not(int No)
{
	int i;

	if(No==1 || No==-1 || No==0)
		return FALSE;

	if(No<0)
		No=-No;

	for(i=2;i<=No/2; i++)
	{
		if(No%i==0)
		{
			return FALSE;
			break;
		}
		return TRUE;
	}
}
int main()
{
	int value;
	BOOL bReturn=FALSE;

	printf("Enter the Number");
	scanf("%d",&value);

	bReturn=Prime_Or_Not(value);

	if(bReturn==TRUE)
		printf("It is Prime number");
	else
		printf("It is not Prime number");
}