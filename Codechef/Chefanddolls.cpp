#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        int a, b=0;
        for(int i=0;i<N;++i){
            cin >> a;
            b ^= a;
        }
        cout << b << endl;
    }
	return 0;
}
