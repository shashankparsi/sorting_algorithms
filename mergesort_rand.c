#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void merge(int data[],int size,int left,int middle,int right)
{
	int i,j,k;
	i=left;
	j=middle+1;
	k=left;
	int temp[size];
	while(i<=middle && j<=right)
	{
		if(data[i] <= data[j])
		{
			temp[k]=data[i];
			i++;
			k++;
		}
		else
		{
			temp[k]= data[j];
			j++;
			k++;
		}
	}
		while(i<=middle)
		{
			temp[k]=data[i];
			i++;
			k++;
		}
		while(j <= right)
		{
			temp[k]= data[j];
			j++;
			k++;
		}
		for(int n=left;n<=right;n++)
		{
			data[n]= temp[n];
		}
}

void merge_sort(int data[],int size,int left,int right)
{
	//int middle = (left + right)/2;
	if(left < right)
	{
		int middle = (left + right)/2;
		merge_sort(data,size,left,middle);
		merge_sort(data,size,middle+1,right);
		merge(data,size,left,middle,right);
	}
}


int main()
{
        int size;
        printf("enter the size of the array:");
        scanf("%d",&size);
        int data[size];
        int i,j,left=0;
	int right = size-1;
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
        merge_sort(data,size,left,right);
        printf("Array elements after sorting:\n");
        for(i=0;i<size;i++)
        {
                printf("%d ",data[i]);
        }
        printf("\n");
        return 0;
}
