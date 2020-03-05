/*Accept N numbers from user as well as accept one element and return frequency of that number from N numbers...!!!

======Input=========================Output=========================
size=6
arr[size]={10,11,15,11,4,9}        Frequency of number 11 is:2
No=11

===================================================================
*/




#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>


int Frequency_Of_Number(int*arr,int size,int No)
{
	int i=0,count=0;

	if(arr==NULL || size<=0 )
		return 0;
	for(i=0; i<size; i++)
	{
		if(No==arr[i])
			count++;
	}
	return count;
}

int main()
{
	int size=0, i=0, iReturn=0;
	int*p=NULL;
	int num=0;

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

	
	printf("Enter the number to search\n");
	scanf("%d",&num);

	iReturn=Frequency_Of_Number(p,size,num);

	printf("Frequency of number %d is:%d\n",num, iReturn);

	return 0;
}