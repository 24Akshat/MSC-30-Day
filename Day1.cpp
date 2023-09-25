/*
You are given N integers.Sort the N integers and print the sorted order.

Input Format
The first line of the input contains N where N is the number of integers. The next line contains N integers.
Constraints
1<=N<=10^5
1<=V<=10^9, where V is the integer in the vector.

Output Format
Print the integers in the sorted order one by one in a single line followed by a space.
*/

//Code Solution:

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int>v;
    int times;
    cin>>times;
    while(times){
        int elem;
        cin>>elem;
        v.push_back(elem);
        times--;
    }  
    sort(v.begin(),v.end(),greater<int>());
    while(v.size()){
        cout<<v[v.size()-1]<<" ";
        v.pop_back();
    }
    return 0;
}
