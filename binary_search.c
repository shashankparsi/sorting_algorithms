#include<stdio.h>
#include<stdlib.h>

int binary_search(int *arr,int left,int right,int data)
{
int mid;
while(right>=left)
{
mid=left+(right-left)/2;
if(arr[mid]==data)
{
printf("mid=%d, left=%d,right=%d,data=%d\n",mid,left,right,data);
return mid;
}
else if(arr[mid]<data)
{
left=mid+1;
}
else
{
right=mid-1;
}
}
return -1;
}



int main()
{
int *arr=calloc(100,sizeof(int));
//int arr[5];
int size;
printf("enter the sizeof array:");
scanf("%d",&size);
realloc(arr,size);
printf("enter the elements of array:");
for(int i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
int left=0;
int right=size-1;
int data;
printf("enter the data to be searched in array:");
scanf("%d",&data);

int pos=binary_search(arr,left,right,data);
printf("data found at position: %d\n",pos);
if(pos==-1)
{
printf("data not found\n");
}

return 0;
}

