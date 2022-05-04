/* C++ Program to find sum of elements
in a given array */
#include <bits/stdc++.h>
using namespace std;

// Driver code
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	/* calling accumulate function, passing first, last element and
	 initial sum, which is 0 in this case.

	Calling inbuilt function for sum of elements of an array in STL.
accumulate(first, last, sum);
first, last : first and last elements of range  
                whose elements are to be added
                */
	cout << "Sum of given array is " << accumulate(arr, arr + n, 0);
	
	/*
	output:	Sum of given array is 55	*/
	return 0;
}


