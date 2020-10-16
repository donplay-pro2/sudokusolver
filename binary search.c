#include<stdio.h>
int binarysearch(int arr[],int low,int high,int key)
{
	int mid;
	mid=(low+high)/2;
	if(arr[mid]==key)
	return mid;
	else if(arr[mid]<key)
	return binarysearch(arr,mid+1,high,key);
	else
	return binarysearch(arr,low,mid,key);
	
	return 1;
}
int main()
{
	int arr[10000],i,n,p,key,low,high;//here key is the element x to be searched
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter the sorted array: \n");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("Enter the key to be searched:\n");
	scanf("%d",&key);
	low=0;
	high=n-1;
    p=binarysearch(arr,low,high,key);
	if(p!=1)
	printf("The number %d present in array at position %d",key,p+1);
	else
	printf("The number %d is not present",key);
	return 0;
}
