# include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	bool flag=false;
	
	for(int i=2; i<=sqrt(n); i++){
		if(n%i == 0){
			flag=true;
			break;
		}
	}
	
	flag ? cout<<"not prime" : cout<<"prime" ;
	return 0;
}
