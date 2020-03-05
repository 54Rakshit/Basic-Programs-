/*Accept N numbers from user in such a way, if number is Even then increment by 4, if Odd decrement by 3...!!!

======Input=========================Output=========================
size=6
arr[size]={12,15,8,5,20,9}          Updated Array is:
									16
									12
									12
									2
									24
									6
===================================================================
*/

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>


void Update_Numbers(int*arr,int size)
{
	int i=0;

	if(arr==NULL || size<=0)
		return;

	for(i=0; i<size; i++)
	{
		if(arr[i]%2==0)
			arr[i]+=4;
		else
			arr[i]-=3;
	}
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

	Update_Numbers(p,size);

	printf("Updated Array is:\n");
	for(i=0; i<size; i++)
	{
		printf("%d\n",p[i]);
	}

	free(p);

	return 0;
}