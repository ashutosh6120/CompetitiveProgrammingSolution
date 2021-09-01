//https://www.codechef.com/COOK131C/problems/CHFGCD
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120


#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x,y,res;
	    cin >> x >> y;
	    if(x%2==0 && y%2==0)
	        res=0;
	    else if(__gcd(x,y)!=1)
	        res=0;
	    else if(__gcd(x+1,y)>1 || __gcd(x,y+1)>1)
	        res=1;
	    else
	        res=2;
	   cout << res << endl;
	}
	return 0;
}