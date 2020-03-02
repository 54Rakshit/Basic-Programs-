/*Accept number from user and return summation of its Factors...!!!

=====Input===================Output=====================================
No=12                 The Factors of in Reverse order are 6 4 3 2 1
=======================================================================
*/


#include <stdio.h>

void Reverse_Factors(int No)
{
	int count=0; 

	if (No<0)
		No=-No;

	for (count=No/2; count>=1; count--)
	{
		if(No%count==0)
		{
			printf("The Factors of in Reverse order are:%d\n",count);
		}
	}
}
int main()
{
	int value;
	int iReturn=0;

	printf("Enter the Number :--->");
	scanf("%d",&value);

	Reverse_Factors(value);

	return 0;
}