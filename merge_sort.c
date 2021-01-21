#include<stdio.h>
#include<stdlib.h>

void merge(int *arr,int left,int mid,int right)
{
//int size=sizeof(arr)/sizeof(arr[0]);
int temp[5];
int i=left,j=mid+1,k=left;
while(i<=mid && j<=right)
{
if(arr[i]<=arr[j])
{
temp[k]=arr[i];
i++;
k++;
}
else
{
temp[k]=arr[j];
j++;
k++;
}
}
while(i<=mid)
{
temp[k]=arr[i];
i++;
k++;
}
while(j<=right)
{
temp[k]=arr[j];
j++;
k++;
}
for(int p=left;p<=right;p++)
{
arr[p]=temp[p];
}
}


void mergesort(int *arr,int left,int right)
{
if(left<right)
{
int mid=(left+right)/2;
mergesort(arr,left,mid); // for left sub array
mergesort(arr,mid+1,right); // for right sub array
merge(arr,left,mid,right); //for merging
}
}

int main()
{
//int *arr=calloc(100,sizeof(int));
int arr[5];
/*int size;
printf("enter the size of array:");
scanf("%d",&size);*/
printf("enter the 22 integer elements of array:");
for(int i=0;i<5;i++)
{
scanf("%d",&arr[i]);
}
int left,right;
left=0;
right=4;
mergesort(arr,left,right);
printf("elements after sorting :\n");
for(int i=0;i<5;i++)
{
printf("%d\n",arr[i]);
}
//free(arr);
//arr=NULL;
return 0;
}
