//https://www.codechef.com/START5C/problems/CYCLICQD
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i,t,a,b,c,d,res;
	cin >> t;
	for(int i=0;i<t;i++)
	{
	    cin >> a >> b >> c >> d;
	    if(a+c==180 || b+d==180)
	        cout << "YES" << endl;
	    else
	        cout << "NO" << endl;
	}
	return 0;
}
