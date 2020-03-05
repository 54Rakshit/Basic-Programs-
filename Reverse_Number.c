/*
Accept number from user and return reverse of that number....!!!
==========Input============Output========================
No=157                    The number reversed is:751

No=2310                   The number reversed is:132

No=7000                   The number reversed is:7

No=-751                   The number reversed is:157
==========================================================
*/



#include<stdio.h>


int Reverse_Number(int No)
{
	int digit=0,Reverse=0;

	if (No<0)
		No=-No;

	while(No!=0)
	{
		digit=No%10;
		Reverse=Reverse*10+digit;
		No=No/10;
	}
	return Reverse;
}
int main()
{
	int value=0;
	int iReturn=0;

	printf("Enter the Number\n");
	scanf("%d",&value);

	iReturn=Reverse_Number(value);

	printf("The number reversed is:%d\n",iReturn);

	return 0;
}