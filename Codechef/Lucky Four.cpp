//https://www.codechef.com/problems/LUCKFOUR
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int n;
	while(t--){
	    cin>>n;
	    int c=0;
	    while(n!=0){
	        if(n%10==4){
	            c++;
	        }
	        n/=10;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
