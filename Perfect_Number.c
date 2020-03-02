/*Accept number from user and check whether it is Perfect number or Not..!!!

=====Input===================Output==========
No=6                   It is Perfect Number

No=28                  It is Perfect Number

No=25                  It is not Perfect Number
================================================
*/


#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Perfect_Number(int No)
{
	int count=0, sum=0;

	if (No<0)
		No=-No;

	for (count=1; count<=No/2; count++)
	{
		if(No%count==0)
		{
			sum+=count;
		}
	}

	if (sum==No)
		return 1;
	else
		return 0;
}
int main()
{
	int value;
	int bReturn=0;

	printf("Enter the Number :--->");
	scanf("%d",&value);

	bReturn=Perfect_Number(value);

	if(bReturn==1)
		printf("It is Perfect Number\n");
	else
		printf("It is not Perfect Number\n");

	return 0;
}