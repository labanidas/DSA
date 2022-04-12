#include<bits/stdc++.h>
using namespace std;

void countSort(int a[], int n){
	int *m = max_element(a,a+n);	
	int c[*m +1]={ 0 };
	int b[n];
	
	for(int i=0;i<n;i++) c[a[i]]++;
		
	for(int i=0;i<=*m;i++) c[i]=c[i]+c[i-1];
	
	
	
	for(int i=n-1;i>=0;i--)
	{
		b[c[a[i]]-1]=a[i];
		c[a[i]]--;
		
	}
	
	copy(b, b+n, a);
	
	
}

int main(){
	
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	countSort(a,n);
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	
	
	
}
