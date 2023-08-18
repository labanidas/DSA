#include<iostream>
#include<cmath>
using namespace std;


int main(){
	string s;
	cin>>s;
	int ans = 0;
	
	
	int n = s.length();
	
	for(int i =0;i<n;i++){
		
		ans += ((s[i]-48)* pow(8, n-i-1));
		
	}
	cout<<ans<<endl;
	
	
	return 0;
}

