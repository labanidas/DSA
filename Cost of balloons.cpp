/*
You are conducting a contest at your college. This contest consists of two problems and  participants. You know the problem that a candidate will solve during the contest.

You provide a balloon to a participant after he or she solves a problem. There are only green and purple-colored balloons available in a market. Each problem must have a balloon associated with it as a prize for solving that specific problem. You can distribute balloons to each participant by performing the following operation:

1.Use green-colored balloons for the first problem and purple-colored balloons for the second problem
2.Use purple-colored balloons for the first problem and green-colored balloons for the second problem
You are given the cost of each balloon and problems that each participant solve. Your task is to print the minimum price that you have to pay while purchasing balloons.

*/
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
