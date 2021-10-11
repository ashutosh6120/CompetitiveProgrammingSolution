//https://www.codechef.com/OCT21C/problems/ANDSUBAR
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    int p = log (n) / log (2);
	    int k = pow(2,p);
	    int x = k / 2;
	    int y = n - k + 1;
	    if(x>y)
	        cout << x << endl;
	    else
	        cout << y << endl;
	}
	return 0;
}

