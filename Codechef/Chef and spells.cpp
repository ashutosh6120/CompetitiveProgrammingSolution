//https://www.codechef.com/LTIME98C/problems/CHFSPL
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
	    int a,b,c;
	    cin >> a >> b >> c;
	    int res1, res2, res3;
	    res1=a+b;
	    res2=b+c;
	    res3=a+c;
	    if(res1>=res2 && res1>=res3)
	    {
	            cout << res1 << endl;
	    }
	    else if(res2>=res3 && res2>=res1)
	    {
	            cout << res2 << endl;
	    }
	    else
	        cout << res3 << endl;
	}
	return 0;
}
