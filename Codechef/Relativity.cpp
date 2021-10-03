//https://www.codechef.com/JULY21C/problems/RELATIVE
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long h;
	int t,g,c,val;
	cin >> t;
	while(t--)
	{
	    cin >> g >> c;
	    val = c * c;
	    h = val / (2 * g);
	    cout << h << endl;
	}
	return 0;
}
