#include <iostream> 
#include <algorithm> 
#include <cmath> 
using namespace std;


bool pythogorianTriplet(int x,int y, int z){
	
	int a,b,c;
	a = max(x, max(y,z));
	
	if(a==x) {
		b = y;
		c= z;
	}else if (a==y){
		b = x;
		c= z;
	}else{
		b = x;
		c= y;
	}
	 
	if(pow(a,2) == (pow(b,2) + pow(c,2))) return true;
	return false;
}

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int is_pythogorianTriplet = pythogorianTriplet(a,b,c);
	
	is_pythogorianTriplet ? cout<<"Yes" : cout<<"No";
	
	return 0;
}
