//https://www.codechef.com/AUG21C/problems/OLYRANK
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int g1,s1,b1,g2,s2,b2;
	    cin >> g1 >> s1 >> b1 >> g2 >> s2 >> b2;
	    int val = g1 + s1 + b1;
	    int val1 = g2 + s2 + b2;
	    if(val>val1)
	        cout << "1" << endl;
	    else
	        cout << "2" << endl;
	}
	return 0;
}
