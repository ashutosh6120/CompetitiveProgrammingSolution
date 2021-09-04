//https://www.codechef.com/problems/MINNOTES
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120

#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long int
using namespace std;

int main() {
	// your code goes here
	ll t;
	cin >> t;
	while(t--){
	    ll n,sum=0;
	    cin >> n;
	    vector<ll> arr(n);
	    for(auto &x: arr){
	        cin >> x;  sum+=x;
	    }
	    if(n==1)
	    {
	        cout << "1\n";
	        continue;
	    }
	    vector<ll>pref(n), suf(n);
	    
	    pref[0] = arr[0];
	    for(ll i=1; i<n; i++)
	    {
	        pref[i] = __gcd(pref[i-1], arr[i]);
	    }
	    suf[n-1] = arr[n-1];
	    for(ll i= n-2; i>=0; i--)
	        suf[i] = __gcd(suf[i+1], arr[i]);
	    
	    ll ans = sum/pref[n-1];
	    for(ll i=0;i<n;i++)
	    {
	        ll k = __gcd((i-1 < 0 ? 0 : pref[i-1]), (i+1 >=n ? 0 :suf[i+1]));
	        ans = min(ans, 1ll + (sum-arr[i])/k);
	    }
	    cout << ans << endl;
	}
	return 0;
}
