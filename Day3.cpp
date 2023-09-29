/*
Deque-STL

Given a set of arrays of size N and an integer K, you have to find the maximum integer for each and every contiguous subarray of size K for each of the given arrays.

Input Format
First line of input will contain the number of test cases T. For each test case, you will be given the size of array N and the size of subarray to be used K. This will be followed by the elements of the array Ai.

Output Format
For each of the contiguous subarrays of size K of each array, you have to print the maximum integer.
*/

//Code Solution:
#include <iostream>
#include <deque> 
using namespace std;

void printKMax(int arr[], int n, int k){
	//Write your code here.
deque<int> dq;
    
    for (int i=0; i<n; i++){
        
        // base case for first element
        if (dq.empty()){
            dq.push_back(i);
        }
        
        // remove elements outside the current window
        if (dq.front() <= (i - k)){
            dq.pop_front();
        }
        
        // move max element to the front
        while (!dq.empty() && arr[i] >= arr[dq.back()]){
            dq.pop_back();
        }
        
        dq.push_back(i);
        
        // print out only when the first window is completed
        if (i >= (k - 1)){
            cout << arr[dq.front()] << " ";
        }    
    }
    cout << endl;
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}
