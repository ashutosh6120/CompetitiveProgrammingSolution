//https://www.codechef.com/problems/RCBPLAY
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	//how many points rcb need = y-x
	//max points will be = 2 * z
	int t;
	cin >> t;
	while(t--) {
	    int x,y,z;
	    cin >> x >> y >> z;
	    //not qualify case is if (y-x) > (2*z)
	    if(y-x>2*z)
	        cout << "NO" << endl;
	    else
	        cout << "YES" << endl;
	}
	return 0;
}

