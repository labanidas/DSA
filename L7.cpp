//https://www.youtube.com/watch?v=eQCS_v3bw0Q&list=PLgUwDviBIf0rGlzIn_7rsaR2FQ5e6ZOL9&index=7

#include<bits/stdc++.h>
using namespace std;

// printing subsequence with sum k
void printSubSeq(vector<int> nums, int *arr, int i, int n, int k, int sum = 0){
    if(i>=n) {
        if(sum == k){
            cout<<"{ ";
            for(auto i: nums) cout<<i<<" ";
            cout<<" }"<<", ";
        }
        return;
    }
    
    printSubSeq(nums,arr, i+1, n,k,  sum);
    nums.push_back(arr[i]);
    sum += arr[i];
    
    printSubSeq(nums,arr, i+1, n, k, sum);
    nums.pop_back();
    sum -= arr[i];
    
}

int main() {
    int arr[3] = {3,1,2};
    vector<int> nums;
    printSubSeq(nums, arr, 0, 3, 5);
    
    return 0;
}



// printing ATLEAST ONE subseequence with sum k
bool printSubSeq(vector<int> nums, int *arr, int i, int n, int k, int sum = 0, bool flag = false){
    if(i>=n) {
        if(sum == k){
            cout<<"{ ";
            for(auto i: nums) cout<<i<<" ";
            cout<<" }"<<", ";
            return true;
        }
        return false;
    }
    

    nums.push_back(arr[i]);
    sum += arr[i];
    if(printSubSeq(nums,arr, i+1, n,k,  sum)){
        return true;
    }
    
   
    nums.pop_back();
    sum -= arr[i];
    if(printSubSeq(nums,arr, i+1, n,k,  sum)){
        return true;
    }
    
    
    return false;
}

int main() {
    int arr[3] = {1,2,1};
    vector<int> nums;
    printSubSeq(nums, arr, 0, 3, 2);
    
    return 0;
}


// count subsequence whose sum is k
#include<bits/stdc++.h>
using namespace std;

int printSubSeq(vector<int> nums, int *arr, int i, int n, int k, int sum = 0){
    if(i>=n) {
        if(sum == k)
            return 1;
        else return 0;
    }
    
    nums.push_back(arr[i]);
    sum += arr[i];
    int count1 = printSubSeq(nums,arr, i+1, n,k, sum);

    nums.pop_back();
    sum -= arr[i];
    int count2 = printSubSeq(nums,arr, i+1, n,k, sum);

    return count1 + count2;
}

int main() {
    int arr[3] = {1,2,1};
    vector<int> nums;
    int count = printSubSeq(nums, arr, 0, 3, 2);
    cout<<count;
    
    return 0;
}
