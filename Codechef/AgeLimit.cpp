#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	 int k,x,y,a;
    cin>>k;
    while(k--)
    {
        cin>>x>>y>>a;
        if(a>=x && a<y)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
	return 0;
}
