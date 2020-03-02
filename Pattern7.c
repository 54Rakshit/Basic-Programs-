/*Accept Row no & Column no from user and Display Patterns
=================Input============================
Row=5, Column=4
================Output==============================
1               2               3               4

5               6               7               8

9               1               2               3

4               5               6               7
========================================================
*/


#include <stdio.h>


void DisplayPattern1(int Row,int Column)
{
	int i,j;
	int count=1;

	for (i=1;i<=Row;i++)
	{
		for (j=1; j<=Column && count<=9; j++)
		{
			printf("%d\t\t",count++);

			if(count>9)
			{
				count=1;
			}
			
		}
		printf("\n\n");
	}
}


int main()
{
	int Row, Column;

	printf("Enter the number of rows :--> \n");
	scanf("%d",&Row);

	printf("Enter the number of Columns :--> \n");
	scanf("%d",&Column);

	DisplayPattern1(Row,Column);
}