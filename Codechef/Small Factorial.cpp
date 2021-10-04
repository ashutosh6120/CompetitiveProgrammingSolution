//https://www.codechef.com/problems/FLOW018
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120

#include <iostream>
using namespace std;
int factorial(int m)
{
    if(m>=1)
        return m*factorial(m-1);
    else 
        return 1;
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int res=factorial(n);
	    cout << res<< endl;
	}
	return 0;
}
