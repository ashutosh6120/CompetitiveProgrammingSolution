//https://www.codechef.com/OCT21C/problems/THREEBOX
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int a,b,c,d;
	    cin >> a >> b >> c >> d;
	    if(a+b+c<=d)
	        cout << 1 << endl;
	    else if(a+b<=d)
	        cout << 2 << endl;
	    else
	        cout << 3 << endl;
	}
	return 0;
}

