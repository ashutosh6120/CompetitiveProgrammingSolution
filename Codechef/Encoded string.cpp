//https://www.codechef.com/problems/DECODEIT
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,t;
    cin>>t;
    while(t)
    {
    cin>>n;
    char C[n];
    cin>>C;
    for(int i=0;i<n;i+=4)
    {
      int val=  97+8*(C[i]-'0')+4*(C[i+1]-'0')+2*(C[i+2]-'0')+(C[i+3]-'0');
      cout<<char(val);
    }
    cout<<endl;
    --t;
}
	return 0;
}
