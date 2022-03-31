#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i)
{

		int largest = arr[i*2]>arr[i*2+1] ? i*2 : i*2+1;
		cout<<largest<<" ";
		if(arr[largest]>arr[i] && largest<n)
		{
			swap(arr[largest], arr[i]);
			heapify(arr, n, largest);
		}	
}


void heapsort(int arr[] , int n)
{
	for(int i=(n/2)-1;i>0;i--)
	heapify(arr, n, i);
}

void display(int arr[], int n)
{
		if(n==0){
		cout<<"Empty array\n";
		return;
	}
	for(int i=1;i<n;i++)
	cout<<arr[i]<<' ';
	cout<<"\n";
}
int main()
{
	int n=0;
	cout<<"Enter number of elements to store in heap:\t ";
	cin>>n;
	n=n+1;
	int arr[n];
	arr[0]=-1;
	cout<<"Enter the elements:\t";
	for(int i=1;i<n;i++) cin>>arr[i];

	heapsort(arr, n);
	cout<<"Heap after sorting:\t";
	display (arr,n);
}

