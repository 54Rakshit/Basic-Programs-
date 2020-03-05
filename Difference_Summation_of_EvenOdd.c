/*Accept number from user and return Difference of Summation of Even & Odd Digits...!!!

==========Input============Output=========================================
No=2395                The difference of summation of Even and odd is:15 

No=1018                The difference of summation of Even and odd is:6

No=8440                The difference of summation of Even and odd is:16

No=5773                The difference of summation of Even and odd is:22

*/

#include<stdio.h>

int Difference_Of_Summation_of_EvenOdd(int No)
{
	int digit=0, Even_sum=0, Odd_sum=0;
	int Difference=0;
	
	if(No<0)
		No=-No;

	while (No!=0)
	{
		digit=No%10;
		if(digit%2==0)
			Even_sum+=digit;
		else
			Odd_sum+=digit;
		No=No/10;
	}

	if(Even_sum>Odd_sum)
		Difference=Even_sum-Odd_sum;
	else
		Difference=Odd_sum-Even_sum;

	return Difference;

}
int main()
{
	int value=0;
	int iReturn=0;

	printf("Enter the number\n");
	scanf("%d",&value);

	iReturn=Difference_Of_Summation_of_EvenOdd(value);

	printf("The difference of summation of Even and odd is:%d\n ",iReturn);

	return 0;
}