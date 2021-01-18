#include<stdio.h>
#include<stdlib.h>


int main()
{
int *arr=calloc(4,sizeof(int)),size;
printf("enter the size of array :");
scanf("%d",&size);
realloc(arr,size);
int i,data;
printf("enter the elements of array ");
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
printf("enter the element to be searched :");
scanf("%d",&data);
int temp=-1;
for(i=0;i<size;i++)
{
if(arr[i]==data)
{
printf("element found at %d\n",i);
temp=0;
break;
}
}
if(temp==-1)
{
printf("data not found\n");
}
free(arr);
}

