/*
>>>Display Prime Numbers between two intervals...!!!!!

===Input======================Output==================================================
20 to 50                   Prime numbers between 20 to 50 are:23 29 31 37 41 43 47

70 to 100                  Prime numbers between 70 to 100 are:71 73 79 83 89 97

========================================================================================
*/


#include <stdio.h>


void List_Of_Prime(int lower,int upper)
{
	int i;
	int flag;
	
	printf("Prime numbers between %d to %d are:",lower,upper);


	if(lower<0)
		lower=-lower;
	if(upper<0)
		upper=-upper;

	while(lower<upper)
	{
		flag=0;

		for(i=2;i<=lower/2; i++)
		{
			if(lower%i==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
			printf("%d ",lower);
			
		lower++;
	}
}


int main()
{
	int lower, upper;

	printf("Enter the range : \n");
	scanf("%d%d",&lower,&upper);

	List_Of_Prime(lower,upper);

	return 0;
}