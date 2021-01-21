#include<stdio.h>
#include<stdlib.h>

void bubble_sort(int *arr,int size)
{
int j;
for(int i=0;i<size;i++)
{
for(j=0;j<size-i-1;j++)
{

if(arr[j]>arr[j+1])
{
arr[j]^=arr[j+1]^=arr[j]^=arr[j+1];
}
}
}
}



int main()
{
int *arr=calloc(100,sizeof(int));
int size,i;
printf("enter the size of array:");
scanf("%d",&size);
printf("enter the elements of array:");
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}

bubble_sort(arr,size);
printf("sorted array is:\n");
for(i=0;i<size;i++)
{
printf("%d\n",arr[i]);
}
return 0;
}
