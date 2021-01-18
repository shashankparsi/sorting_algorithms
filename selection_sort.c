#include<stdio.h>
#include<stdlib.h>


int main()
{
//int arr[10000000]=rand();
int *arr=calloc(100,sizeof(int));
int min,size,i,j;
printf("enter the size of array:");
scanf("%d",&size);
printf("enter the elements of array :");
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
//arr[i]=rand()%10000;
}
for(i=0;i<size-1;i++)
{
min=i;
for(j=i+1;j<size;j++)
{
if(arr[j]<arr[min])
{
min=j;
}
}
if(min!=i)
{
arr[min]^=arr[i]^=arr[min]^=arr[i];
/*int temp=arr[min];
arr[min]=arr[i];
arr[i]=temp;*/
}
}
printf("sorted array is: \n");
for(i=0;i<size;i++)
{
printf("%d",arr[i]);
printf("\n");
}
return 0;
}


