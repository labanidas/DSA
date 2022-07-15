#include <bits/stdc++.h>
using namespace std;

countSort(int arr[], int n, int pass)
{
	int count[10] ={0};
	
	int b[n];
	
	for(int i=0;i<n;i++) count[(arr[i]/pass)%10]++;
//	for(int i=1;i<10;i++) cout<<count[i]<<endl;
	
	for(int i=1;i<10;i++) count[i]=count[i-1]+count[i];
//	for(int i=1;i<10;i++) cout<<count[i]<<endl;
	
	for(int i=n-1;i>=0;i--) {
		b[count[(arr[i]/pass)*10]-1] = arr[i];
		count[(arr[i]/pass)*10]--;
	}
	for(int i=0;i<n;i++) arr[i] = b[i];
//	copy(b ,b+n, arr);

	
}
radixSort(int arr[], int n)
{
	int max =  *max_element(arr,arr+n);
	
//	cout<<"max "<<max<<endl;
	for(int pass=1; max/pass>0; pass*=10) 	{
//		cout<<"pass "<<pass<<endl;
		countSort(arr,n,pass);
	}
		
}


int main(){
	
    int arr[] = { 170, 45, 75, 90, 802, 24, 2, 66 };
	int size = sizeof(arr)/sizeof(arr[0]);
	radixSort(arr,size);
	for(int i=0;i<size;i++) cout<<arr[i]<<" ";	
  
}
