# include<iostream>
using namespace std;

int fact(int n){
	if(n==0 || n==1) return 1;	
	return n * fact(n-1);
	
}

int main(){
	int n, r;
	cin>>n>>r;	
	
	int ans = fact(n) / (fact(n-r)*fact(r));
	
	cout<<ans;
	
	return 0;
}
