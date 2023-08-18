# include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int  lastdigit, reversed_num = 0;
	
	while(n!=0){
		lastdigit = n%10;
		reversed_num = reversed_num*10 + lastdigit;
		n = n/10;
		
	}
	cout<<reversed_num;
	
	return 0;
}
