/*Accept number from user and return Largest factor of that number
=========Input=============Output=====================
No=12                  The largest of all Factors is==>144  
No=13                  The largest of all Factors is==>1
No=10                  The largest of all Factors is==>10

==============================================================
*/


#include <stdio.h>

int Multiplication_Of_Factors(int No)
{
	int count=0, mult=1;

	for(count=No/2; count>=1; count--)
	{
		if (No%count==0)
		{
			mult=mult*count;
		}
	}
	return mult;
}
int main()
{
	int value;
	int iReturn=0;

	printf("Enter the Number :--->");
	scanf("%d",&value);

	iReturn=Multiplication_Of_Factors(value);
	printf("The multiplication of all Factors is==>%d\n",iReturn);

	return 0;
}