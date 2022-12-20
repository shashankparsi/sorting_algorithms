#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void selection_sort(int data[],int size)
{
	int i,j,temp,min;
	for(i=0;i<size-1;i++)
	{
		min=i;
		for(j=i+1;j<size;j++)
		{
			if(data[j]< data[min])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			temp = data[min];
			data[min]=data[i];
			data[i]=temp;
		}
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
	printf("The elements of array are:\n");
	for(j=0;j<size;j++)
	{
		printf("%d ",data[j]);
	}
	printf("\n");
	selection_sort(data,size);
	printf("The array elements after sorting:\n");
	for(i=0;i<size;i++)
	{
		printf("%d ",data[i]);
	}	
	printf("\n");
	return 0;
}

