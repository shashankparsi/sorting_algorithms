#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
	int size,temp;
	printf("enter the size of the array:");
	scanf("%d",&size);
	int data[size];
	int i,j;
	for(i=0;i<size;i++)
	{
		data[i]= rand()%size;
	}
	printf("The Array elements are:\n");
	for(j=0;j<size;j++)
	{
		printf("%d ", data[j]);
	}
	printf("\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(data[j] > data[j+1])
			{
				temp=data[j];
				data[j]=data[j+1];
				data[j+1]=temp;
			}
		}
	}
	printf("The Array elements after sorting :\n");
	for(j=0;j<size;j++)
	{
		printf("%d ",data[j]);
	}

	printf("\n");
	return 0;
}
