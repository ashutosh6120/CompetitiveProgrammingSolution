//https://www.codechef.com/JULY21C/problems/EITA
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,d,x,y,z;
	cin >> t;
	while(t--)
	{
	    int res1,res2,val,max;
	    cin >> d >> x >> y >> z;
	    val= 7 - d;
	    res1 = x * 7;
	    res2 = (y * d) + (z * val);
	    if(res1 >= res2)
	        max = res1;
	    else
	        max = res2;
	    cout << max << endl;
	}
	return 0;
}
