//https://www.codechef.com/problems/TSORT
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120

#include <iostream>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	long int a[t];
    for(int i=0;i<t;i++)
        cin>>a[i];
    sort(a,a+t);
    for(int i=0;i<t;i++)
        cout<<a[i]<<endl;
	return 0;
}
