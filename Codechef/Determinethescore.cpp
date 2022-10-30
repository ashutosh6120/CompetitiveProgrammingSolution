#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x;
	    cin >> x;
	    int n;
	    cin >> n;
	    int val = x/10;
	    int res = val * n;
	    std::cout << res << std::endl;
	}
	return 0;
}
