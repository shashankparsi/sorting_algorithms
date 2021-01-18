#include<stdio.h>

int main()
{
int arr[5]={1,2,3,4,5};
printf("enter the element to be searched in array:");
int ele;
scanf("%d",&ele);
int i,temp=-1;
for(i=0;i<5;i++)
{
if(arr[i]==ele)
{
printf("element found at pos: %d\n",i);
temp=0;
break;}
}

if(temp==-1)
{
printf("element not found\n");
}
return 0;
}



