#include<stdio.h>
#include<stdlib.h>
void insertion_sort(int *arr,int size)
{
int i,j=0,key=0;
for(i=1;i<size;i++)
{
key=arr[i];
j=i-1;
while(j>=0 && arr[j]>key)
{
arr[j+1]=arr[j];
j=j-1;
}
arr[j+1]=key;
}
}

int main()
{

int *arr=calloc(100,sizeof(int));

int size,i;
printf("enter the size of array:");
scanf("%d",&size);
printf("enter the elements of array:");
for(int i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}

insertion_sort(arr,size);

printf("sorted array is: \n");
for(i=0;i<size;i++)
{
printf("%d\n",arr[i]);
}
return 0;
}


