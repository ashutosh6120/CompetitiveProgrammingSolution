//https://www.codechef.com/SNCKQL21/problems/LUCKYNUM
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int a,b,c;
	    cin >> a >> b >> c;
	    if(a==7 || b==7 || c==7)
	        cout << "YES" << endl;
	    else
	        cout << "NO" << endl;
	}
	return 0;
}

