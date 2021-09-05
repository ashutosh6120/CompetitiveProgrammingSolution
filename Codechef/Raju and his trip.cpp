//https://www.codechef.com/YTPP001/problems/VALTRI
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	if(n%5 == 0 || n%6 ==0)
	    cout << "YES" << endl;
	else
	    cout << "NO" << endl;
	return 0;
}
