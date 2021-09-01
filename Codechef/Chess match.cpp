//https://www.codechef.com/START5C/problems/BLITZ3_2
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i,t,n,a,b,res,res1,val;
	cin >> t;
	for(i=0;i<t;i++)
	{
	    cin >> n >> a >> b;
	    res=2*(180+n);
	    res1=a+b;
	    val=res-res1;
	    cout << val << endl;
	}
	return 0;
}
