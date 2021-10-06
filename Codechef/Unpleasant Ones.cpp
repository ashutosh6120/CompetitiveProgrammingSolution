//https://www.codechef.com/problems/UNONE
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define pb push_back

//calling function
void solve()
{
    int n;
    cin >> n;
    int x;
    std::vector<int> odd;
    std::vector<int> even;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        if(x%2==0)
            even.pb(x);
        else
            odd.pb(x);
    }
    for(int i=0;i<even.size();i++)
        cout << even[i] << " ";
    for(int i=0;i<odd.size();i++)
        cout << odd[i] << " ";
    cout << "\n" ;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    solve();
	}
	return 0;
}
