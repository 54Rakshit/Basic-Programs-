/*
Accept number from user and return reverse of that number....!!!
==========Input============Output========================
No=757                    The number is Palindrome

No=7337                   The number is Palindrome

No=7                      The number is Palindrome

No=1531                   The number is not Palindrome
==========================================================
*/



#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;


BOOL Palindrome_Or_Not(int No)
{
	int digit=0,Reverse=0;
	int temp=0;

	//If less than 0 or -ve number, convert to +ve number
	if (No<0)
		No=-No;

	//If only one number
	if(No<=9)
		return TRUE;

	temp=No;     //Take the original number in Temp to compare

	while(No!=0)
	{
		digit=No%10;
		Reverse=Reverse*10+digit;
		No=No/10;
	}

	if(temp==Reverse)
		return TRUE;
	else
		return FALSE;
	
}
int main()
{
	int value=0;
	BOOL bReturn=FALSE;

	printf("Enter the Number\n");
	scanf("%d",&value);

	bReturn=Palindrome_Or_Not(value);

	if(bReturn==TRUE)
		printf("The number is Palindrome\n");
	else
		printf("The number is not Palindrome\n");

	return 0;
}