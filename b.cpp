#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int x,y;
		int n;
		cin>>x>>y;
		cin>>n;
		int temp;
		int a=0,b=0;
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<2;j++)
			{
				cin>>temp;
				if(j==0 && temp==1) a++;
				if(j==1 && temp==1) b++;

			}
		}
		
		if(a*x+b*y > a*y+b*x ) cout<<a*y+b*x<<endl;
		else cout<<a*x+b*y<<endl;
		
	}

}
