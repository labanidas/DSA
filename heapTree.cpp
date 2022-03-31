//insert into heap tree
#include<bits/stdc++.h>
using namespace std;

void insert(int arr[],int value,int i)
{
	arr[i]=value;
		while(i>1)
		{
		int parent = i/2;
		if(arr[parent]<arr[i])
			{
				swap(arr[parent],arr[i]);
				i=parent;
			}
		else break;
		}	
	
}

void deleteInHeap(int arr[], int& i)
{
	if(i==0){
		cout<<"Empty array\n";
		return;
	}
	
	arr[1]=arr[i];
	i=i-1;
	int k=1;
	while(k<i)
	{
		int loc = arr[2*k]>arr[2*k+1] ? 2*k : 2*k+1;
		
		if(arr[k] < arr[loc])
		{
			swap(arr[k], arr[loc]);
			k=loc;
		}
		else break;
		
	}
}

void display(int arr[], int i)
{
		if(i==0){
		cout<<"Empty array\n";
		return;
	}
	for(int j=1;j<=i;j++)
	cout<<arr[j]<<' ';
	cout<<"\n";
}

int main()
{
	int value;
	int choice;
	int arr[20];
	int i=0;
	while(1)
	{
		cout<<"\n1.Insert\n2.Delete\n3.Display\nEnter your choice: ";
		cin>>choice;
		switch(choice)
		{
			case 1: cout<<"Enter element to insert:\t";
					cin>>value;
					if(i<20)
					{
						i=i+1;
						insert(arr,value,i);	
					}				
					else 	cout<<"Array full";
					break;
					
			case 2: deleteInHeap(arr,i);
					break;	
				
			case 3: display(arr,i);	
					break;		
		}
 	}
	
	
	
}
