//https://www.codechef.com/YTPP001/problems/RNGEODD
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int l,r;
	cin >> l >> r;
	for(int i=l;i<=r;i++)
	    if(i%2!=0)
	        cout << i << endl;
	return 0;
}
