//https://www.codechef.com/LTIME97C/problems/CHFRICH
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,i,a,b,x;
	int res, res1;
	cin >> t;
	for(i=0;i<t;i++)
	{
	    cin >> a >> b >> x;
	    res=b - a;
	    res1 = res / x;
	    cout << res1 << endl;
	}
	return 0;
}
