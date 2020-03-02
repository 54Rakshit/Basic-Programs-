/*Accept Row no & Column no from user and Display Pattern
Input
Row=4,Column=5

Output
* * * * *
* * * * *
* * * * *
* * * * * 
*/

#include <stdio.h>


void DisplayPattern1(int Row,int Column)
{
	int i,j;
	
	for (i=0;i<Row;i++)
	{
		for(j=0; j<Column;j++)
		{
			printf("*\t\t");
		}
		printf("\n");
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
