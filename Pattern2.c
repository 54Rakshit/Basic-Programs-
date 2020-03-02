/*Accept Row no & Column no from user and Display Patterns
Input:
Row=4, Column=4

Output
*  #  *  #

*  #  *  #

*  #  *  #

*  #  *  #
*/


#include <stdio.h>


void DisplayPattern1(int Row,int Column)
{
	int i,j;

	for (i=1;i<=Row;i++)
	{
		for(j=1; j<=Column;j++)
		{
			if(j%2==0)
			{
				printf("#\t\t");
			}
			else
			{
				printf("*\t\t");
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