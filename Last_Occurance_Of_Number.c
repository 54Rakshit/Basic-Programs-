/*Accept N numbers from user as well as accept one element and return Index of Last Occurance of that number from N numbers...!!!

======Input=========================Output=========================
size=5
arr[size]={11,21,15,21,45}           SUCCESS:Element occurs at Index :3
No=11

size=5
arr[size]={105,121,151,41,19}        ERROR: There is no such element
No=150

===================================================================
*/

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>


int Last_Occurance_Of_Number(int*arr,int size,int No)
{
	int index=0;

	if(arr==NULL)
		return -1;

	if(size<=0)
		return -2;

	for(index=size-1; index>=0; index--)
	{
		if(No==arr[index])
			break;
	}

	if(index==-1)
		return -3;

	else
		return index;
}

int main()
{
	int size=0, i=0, iReturn=0;
	int*p=NULL;
	int num=0;

	printf("Enter the number of elements ==>");
	scanf("%d",&size);

	p=(int*)malloc(sizeof(int)*size);
	printf("Enter the elements\n");
	for(i=0; i<size; i++)
	{
		scanf("%d",&p[i]);
	}

	
	printf("Enter the number to search\n");
	scanf("%d",&num);

	iReturn=Last_Occurance_Of_Number(p,size,num);

	if(iReturn==-1)
		printf("ERROR: Memory Failure\n");

	else if(iReturn==-2)
		printf("ERROR: Size Failure\n");

	else if(iReturn==-3)
		printf("ERROR: There is no such element\n");

	else
		printf("SUCCESS:Element occurs at Index :%d\n",iReturn);

	return 0;
}