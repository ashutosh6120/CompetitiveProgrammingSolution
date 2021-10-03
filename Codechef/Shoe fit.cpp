//https://www.codechef.com/COOK131C/problems/SHOEFIT
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a,b,c;
	    cin >> a >> b >> c;
	    int res=0;
	    if(a*b*c==0 && (a+b+c)>0)
	        res=1;
	    cout << res << endl;
	}
	return 0;
}
