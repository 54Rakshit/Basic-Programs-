/*Accept number from user and return Largest factor of that number
=========Input=============Output=====================
No=12                  The largest of all Factors is==>6  
No=13                  The largest of all Factors is==>1
No=25                  The largest of all Factors is==>5
No=100                 The largest of all Factors is==>50
No=27                  The largest of all Factors is==>9

==============================================================
*/


#include <stdio.h>

int Largest_Factor(int No)
{
	int count=0;

	for(count=No/2; count>=1; count--)
	{
		if (No%count==0)
		{
			break;
		}
	}
	return count;
}
int main()
{
	int value;
	int iReturn=0;

	printf("Enter the Number :--->");
	scanf("%d",&value);

	iReturn=Largest_Factor(value);
	printf("The largest of all Factors is==>%d\n",iReturn);

	return 0;
}