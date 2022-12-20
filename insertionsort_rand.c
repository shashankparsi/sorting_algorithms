#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void insertion_sort(int data[],int size)
{
	int i,j,temp,key;
	for(i=1;i<size;i++)
	{
		key=data[i];
		j=i-1;
		while(j>=0 && data[j] > key)
		{
			data[j+1]=data[j];
			j=j-1;
		}
		data[j+1]=key;
	}
}

int main()
{
	int size;
	printf("enter the size of the array:");
	scanf("%d",&size);
	int data[size];
	int i,j;
	for(i=0;i<size;i++)
	{
		data[i]=rand()%size;
	}
	printf("The Array elements are :\n");
	for(j=0;j<size;j++)
	{
		printf("%d ",data[j]);
	}
	printf("\n");
	insertion_sort(data,size);
	printf("Array elements after sorting:\n");
	for(i=0;i<size;i++)
	{
		printf("%d ",data[i]);
	}
	printf("\n");
	return 0;
}
