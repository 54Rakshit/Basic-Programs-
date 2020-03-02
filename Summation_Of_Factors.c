/*Accept number from user and return summation of its Factors...!!!

=====Input===================Output=====================================
No=10 or -10           The summation of Factors of the given No is:==>>8        

No=7                   The summation of Factors of the given No is:==>>1

No=25                  The summation of Factors of the given No is:==>>6

No=0                   The summation of Factors of the given No is:==>>0
=======================================================================
*/


#include <stdio.h>

int Summation_Of_Factors(int No)
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
	return sum;
}
int main()
{
	int value;
	int iReturn=0;

	printf("Enter the Number :--->");
	scanf("%d",&value);

	iReturn=Summation_Of_Factors(value);

	printf("The summation of Factors of the given No is:==>>%d\n",iReturn);

	return 0;
}