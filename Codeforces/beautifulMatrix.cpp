//http://codeforces.com/problemset/problem/263/A
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int arr [6][6]; 
	int x,y =0; 
	for (int i = 1; i <=5; i++) { 
	    for (int j = 1; j <= 5; j++) { 
	        cin>>arr[i][j]; 
	        if (arr[i][j]== 1) { 
	            x =i ; y =j ;
            }
        } 
	} 
	cout<<(abs(3-x)+abs(3-y));
	return 0;
}

