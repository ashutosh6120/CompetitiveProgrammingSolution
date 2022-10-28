#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T-->0){
	    int X, Y;
	    cin>>X>>Y;
	    if (X%2==0&&Y%2==0 || X%2==1&&Y%2==1) printf("Janmansh\n");
	    else printf("Jay\n");
	}
	return 0;
}
