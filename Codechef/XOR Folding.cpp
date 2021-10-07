//https://www.codechef.com/problems/XORFOLD
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,m,i,j;
	    cin >> n >>m;
	    int ans=0;
	    for(i=0;i<n;i++){
	        for(j=0;j<m;j++){
	            char x;
	            cin >> x;
	            if(x=='1')
	                ans++;
	        }
	    }
	    if(ans%2)
	        cout << "YES" << endl;
	    else
	        cout << "NO" << endl;
	}
	return 0;
}
