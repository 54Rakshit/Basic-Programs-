/*Accept Row no & Column no from user and Display Patterns
Input:
Row=4, Column=4
Output
1  2  3  4

4  3  2  1

1  2  3  4

4  3  2  1


*/


#include <stdio.h>


void DisplayPattern1(int Row,int Column)
{
	int i,j;

	for (i=1;i<=Row;i++)
	{
		if(i%2==0)
		{
			for(j=Column; j>=1; j--)
			{
				printf("%d\t\t",j);
			}
		}
		else
		{
			for(j=1; j<=Column; j++)
			{
				printf("%d\t\t",j);
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