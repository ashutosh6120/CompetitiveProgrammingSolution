//https://www.codechef.com/START7C/problems/FODCHAIN
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120


#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int e,k;
	    cin >> e >> k;
	    int count=1;
	    for(;;)
	    {
	        e = e/k;
	        if(e>=1){
	            count++;
	        }
	        else{
	            cout << count << endl;
	            break;
	        }
	    }
	}
	return 0;
}
