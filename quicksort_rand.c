#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int partition(int data[],int start,int end)
{
	int pivot = data[end];
	int pindex = start;
	for(int i=start;i<end;i++)
	{
		if(data[i] < pivot)
		{
			int temp = data[i];
			data[i]=data[pindex];
			data[pindex]=temp;
			pindex++;
		}
	}
	int temp = data[end];
	data[end] = data[pindex];
	data[pindex] = temp;
	return pindex;
}


void quick_sort(int data[],int size,int start,int end)
{
	if(start < end)
	{
		int p=partition(data,start,end);
		quick_sort(data,size,start,p-1);
		quick_sort(data,size,p+1,end);
	}
}

int main()
{
	int size;
	printf("enter the size of the array: ");
	scanf("%d",&size);
	int data[size];
	int i,j,start=0,end=size-1;
	for(i=0;i<size;i++)
	{
		data[i]=rand()%size;
	}
	printf("The array elements are:\n");
	for(j=0;j<size;j++)
	{
		printf("%d ",data[j]);
	}
	printf("\n");
	quick_sort(data,size,start,end);
	printf("The array elements after sorting are :\n");
	for(i=0;i<size;i++)
	{
		printf("%d ",data[i]);
	}
	printf("\n");
	return 0;
}

