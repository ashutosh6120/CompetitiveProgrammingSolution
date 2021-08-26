//https://www.codechef.com/problems/DIVTHREE
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long  x = 0;
    long long tests;
    cin >> tests;
    while (tests--)
    {
        int n;
        int k;
        int d;
        cin >> n >> k >> d;
        int bucket[n];
        int total = 0;
        for(int i = 0; i<n; i++){
            int a;
            cin >> a;
            total=total+a;
        }
        int x = total/k;
        if(x >= d)
        {
            cout << d << "\n";
        }else{
        cout << x << "\n";
        }
    }
	return 0;
}
