#include<iostream>
#include<cmath>
using namespace std;


int main(){
	string s;
	cin>>s;
	int decumal_num=0;
	int n = s.length();	
	
	for(int i=0; i<n; i++){
		if(s[i] == '1'){
			decumal_num  += pow(2, n-i-1);
		}
	}
	cout<<decumal_num;
	
	return 0;
}
