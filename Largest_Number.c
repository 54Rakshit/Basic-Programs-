/*Accept N numbers from user and return Largest number...!!!

======Input=========================Output=========================
size=6
arr[size]={12,15,8,5,20,9}         The Largest number is :20
===================================================================
*/

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>


int Largest_Number(int*arr,int size)
{
	int i=0;
	int max=arr[0];
	
	for (i=0; i<size; i++)
	{
		if(arr[i]>max)
			max=arr[i];
	}
	return max;
}

int main()
{
	int size=0, i=0, iReturn=0;
	int*p=NULL;

	printf("Enter the number of elements ==>");
	scanf("%d",&size);

	p=(int*)malloc(sizeof(int)*size);
	if(p==NULL)
	{
		printf("Unable to allocate memory");
		return-1;
	}

	printf("Enter the elements\n");
	for(i=0; i<size; i++)
	{
		scanf("%d",&p[i]);
	}

	iReturn=Largest_Number(p,size);

	printf("The Largest number is :%d\n",iReturn);
	return 0;
}