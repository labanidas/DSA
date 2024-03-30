//https://www.youtube.com/watch?v=AxNNVECce8c&list=PLgUwDviBIf0rGlzIn_7rsaR2FQ5e6ZOL9&index=6



#include<bits/stdc++.h>
using namespace std;


void printSubSeq(vector<int> nums, int *arr, int i, int n){
    if(i>=n) {
        cout<<"{ ";
        for(auto i: nums) cout<<i<<" ";
        cout<<" }"<<", ";
        return;
    }
    
    printSubSeq(nums,arr, i+1, n);
    nums.push_back(arr[i]);
    
    printSubSeq(nums,arr, i+1, n);
    nums.pop_back();
    
}

int main() {
    int arr[3] = {3,1,2};
    vector<int> nums;
    printSubSeq(nums, arr, 0, 3);
    
    return 0;
}
