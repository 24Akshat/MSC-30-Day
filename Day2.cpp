/*
Print Pretty

Given a text file with many lines of numbers to format and print, for each row of 3 space-separated doubles, format and print the numbers using the specifications in the Output Format section below.
Input Format
The first line contains an integer,T,the number of test cases. 
Each of the T subsequent lines describes a test case as 3 space-separated floating-point numbers:A,B,and C,respectively.
Output Format
For each test case, print 3 lines containing the formatted A,B,and C,respectively. Each A,B, and C must be formatted as follows:
A: Strip its decimal (i.e., truncate it) and print its hexadecimal representation (including the 0x prefix) in lower case letters.
B: Print it to a scale of 2 decimal places, preceded by a + or - sign (indicating if it's positive or negative), right justified, and left-padded with underscores so that the printed result is exactly 15 characters wide.
C: Print it to a scale of exactly nine decimal places, expressed in scientific notation using upper case.
*/

//Code Solution:

#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
        

    /* Enter your code here */
    		cout << hex << left << showbase << nouppercase;
    		cout << (long long) A << endl;
    
    		cout << dec << right << setw(15) << setfill('_') << showpos << fixed << setprecision(2);
    		cout << B << endl;
    
    		cout << scientific << uppercase << noshowpos << setprecision(9);
    		cout << C << endl;
	}
	return 0;

}
