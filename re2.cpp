#include<bits/stdc++.h>
using namespace std;


// Print name N times using recursion: https://takeuforward.org/recursion/pr...
void printName(int n){
    if(n==0) return;
    
    cout<<"Labani\n";
    return printName(n-1);
}

int main(){
    int n = 7;
    printName(n);
    return 0;
}


// Print 1 to N using recursion: https://takeuforward.org/recursion/pr...
void printName(int n, int i  = 1){
    if(i > n) return;
    
    cout<<i<<endl;
    return printName(n,i+1);
}

int main(){
    int n = 7;
    printName(n);
    return 0;
}


// Print N to 1 using recursion: https://takeuforward.org/recursion/pr...

void printName(int n){
    if(n == 0) return;
    
    cout<<n<<endl;
    return printName(n-1);
}

int main(){
    int n = 7;
    printName(n);
    return 0;
}


// Sum of first N numbers: https://takeuforward.org/data-structu...
int findSum(int n){
    if(n == 1) return 1;
    
    return n +  findSum(n-1);
}

int main(){
    int n = 7;
    cout<<findSum(n);
    return 0;
}

// Factorial of N numbers: https://takeuforward.org/data-structu...
int fact(int n){
    if(n == 1) return 1;
    
    return n *  fact(n-1);
}

int main(){
    int n = 7;
    cout<<fact(n);
    return 0;
}


// Reverse an array: https://takeuforward.org/data-structu...
void reverseArray(int* arr, int i, int j){
    
    if(i>=j) return;
    swap(arr[i], arr[j]);
    return reverseArray(arr, ++i, --j);
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);
    int i = 0, j = n-1;
    for(int k=0; k<n; k++) cout<<arr[k]<<", ";
    cout<<endl;
    reverseArray(arr,i,j);
    for(int k=0; k<n; k++) cout<<arr[k]<<", ";
    return 0;
}


// Check if a string is palindrome or not: https://takeuforward.org/data-structu...
bool checkStringPalindrome(string s, int i, int j){
    
    if(i>=j) return true;
    if(s[i] != s[j]) return false;
    return checkStringPalindrome(s, ++i, --j);
}

int main(){
    
    string s = "labani";
    bool flag = checkStringPalindrome(s, 0, s.size()-1);
    flag ? cout<<s<<" is palindrome\n" : cout<<s<<" is NOT palindrome\n";
    
    s = "madam";
    flag = checkStringPalindrome(s, 0, s.size()-1);
    flag ? cout<<s<<" is palindrome\n" : cout<<s<<" is NOT palindrome\n";
    
    return 0;
}


// Fibonacci Number: https://takeuforward.org/arrays/print...

int printFibonacci(int n) {
    if (n <= 1) return n;

    int x = printFibonacci(n - 1);
    int y = printFibonacci(n - 2);
    
    return x + y;
}

int main() {
    int n = 9;
    cout << "Fibonacci series up to " << n << ": ";
    for (int i = 0; i <= n; i++) {
        cout << printFibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}

// printing fibonacci using recursion
void printFibonacci(int n, int a = 0, int b = 1, int count = 0) {
    if (count == n)
        return;

    cout << a << " ";

    printFibonacci(n, b, a + b, count + 1);
}

int main() {
    int n = 9;
    
    printFibonacci(n);

    return 0;
}
