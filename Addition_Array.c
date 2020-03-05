#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>


int Summation_Array(int*arr,int size)
{
	int i=0, sum=0;

	if(arr==NULL || size<=0 )
		return 0;
	for(i=0; i<size; i++)
	{
		sum+=arr[i];
	}
	return sum;
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
	
	iReturn=Summation_Array(p,size);

	printf("Summation of the Array:%d\n",iReturn);

	return 0;
}