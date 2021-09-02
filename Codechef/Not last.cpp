//https://www.codechef.com/YTPP001/problems/LSTSEV
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	int val=n/10;
	int res=val%10;
	if(res==7)
	    cout << "1" << endl;
	else
	    cout << "0" << endl;
	return 0;
}
