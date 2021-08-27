//https://www.codechef.com/problems/CRICRANK
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int countA=0,countB=0;
	    int r1,w1,c1;
	    cin >> r1 >> w1 >> c1;
	    int r2,w2,c2;
	    cin >> r2 >> w2 >> c2;
	    if(r1>r2)
		{
			countA++;
		}
		else
			countB++;
		if(w1>w2)
		{
			countA++;
		}
		else
			countB++;
		if(c1>c2)
		{
			countA++;
		}
		else
			countB++;
		if(countA>countB)
		{
			cout<<"A"<<endl;
		}
		else
			cout<<"B"<<endl;
	}
	return 0;
}
