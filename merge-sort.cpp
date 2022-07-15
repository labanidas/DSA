#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int l,int mid, int r){
	
	int temp[r-l+1];
	int i=l;
	int j=mid+1;
	int k=0;
	
	while(i<=mid && j<=r)
	{
		if(arr[i]<=arr[j])
		{
			temp[k++]=arr[i++];
			
		}else{
			temp[k++]=arr[j++];
		}
	}
	
		while(j<=r)
		{
			temp[k++]=arr[j++];

		}
	
		while(i<=mid)
		{
			temp[k++]=arr[i++];

		}
		
	for(int x=0; x<k; x++) arr[l++]=temp[x];
}
	
void mergeSort(int arr[], int l,int r){
	
	if(l>=r) return;

	
	int mid = l + (r-l)/2;
	mergeSort(arr,l,mid);
	mergeSort(arr,mid+1,r);
	merge(arr,l,mid,r);
		
}

int main(){
	
	int arr[] = {10,9,8,7,6};
	int size = sizeof(arr)/sizeof(arr[0]);
	mergeSort(arr,0,size-1);
	for(int i=0;i<size;i++) cout<<arr[i]<<" ";
}
