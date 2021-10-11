//https://www.codechef.com/OCT21C/problems/MIXTURE
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int a,b;
	    cin >> a >> b;
	    if(a==0)
	        cout << "Liquid" << endl;
	    if(b==0)
	        cout << "Solid" << endl;
	    if(a>0 && b>0)
	        cout << "Solution" << endl;
	}
	return 0;
}

