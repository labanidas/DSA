#include <iostream>
#include <vector>
using namespace std;


int minPathValue( vector<vector<int>>  mat){
	int n = mat.size();
	
	int dp[n][n] = {0};
	for(int i=0; i<n; i++) dp[n-1][i] = mat[n-1][i];
	
	for(int row=n-2; row>=0; row--){
		for(int col=0; col<=row; col++){
			dp[row][col] = mat[row][col] + min(dp[row+1][col], dp[row+1][col+1]);
		}
	}
	
	return dp[0][0];
	
}


int main(void)
{
	vector<vector<int>> tringle_mat =  {
		{4},
		{1,3},
		{1,2,1},
		{8,4,5,1}
	};
	
	cout<<minPathValue(tringle_mat);
	return 0;
	
}

