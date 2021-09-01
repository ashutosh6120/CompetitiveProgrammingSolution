//https://www.codechef.com/START7C/problems/CHSFORMT
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b;
	    cin >> a >> b;
	    int val=a+b;
	    if(val<3)
	        cout << "1" << endl;
	    else if(val<=3 || val<=10)
	        cout << "2" << endl;
	    else if(val<=11 || val<=60)
	        cout << "3" << endl;
	    else
	        cout << "4" << endl;
	}
	return 0;
}
