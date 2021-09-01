//https://www.codechef.com/COOK131C/problems/CHFPLN
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120


#include <iostream>
#include<bits/stdc++.h>
typedef long long ll; 
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    ll n;
	    cin >> n;
	     ll a[n];
	    for(ll i=0;i<n;i++)
	    {
	        cin >> a[i];
	    }
	    map<ll,ll>v;
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        if(v.find(a[i])==v.end()) { 
	            v[a[i]]++;
	            count++;
	        }
	        else
	        {
	            if(v[a[i]]<a[i]-1)
	                count++;
	                v[a[i]]++;
	        }
	    }
	    cout << count << endl;
	    
	}
	return 0;
}
