# include<iostream>
#include<cmath>
using namespace std;

int main(){
	int num;
	cin>>num;
	
	int n = num;
	
	int lastdigit, sum=0;
	
	while(n!= 0){
		lastdigit = n%10;
		sum += pow(lastdigit, 3);
		n = n/10;
	}
	
//	cout<<sum<<endl;
	sum == num ? cout<<"Armstrong ": cout<<" Not Armstrong ";
	
	return 0;
}
