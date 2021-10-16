//https://www.codechef.com/SNCKQL21/problems/TESTSERIES
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120



#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int r[5];
	    int i;
	    int draw=0, india=0, england=0;
	    for(i=0;i<5;i++)
	        cin >> r[i];
	    for(i=0;i<5;i++) {
	        if(r[i]==0)
	            draw++;
	        else if(r[i]==1)
	            india++;
	        else
	            england++;
	    }
	    if(india == england)
	       cout << "DRAW" << endl;
	    if(india > england)
	       cout << "INDIA" << endl;
	    if(england > india)
	       cout << "ENGLAND" << endl;
	 }
	return 0;
}





