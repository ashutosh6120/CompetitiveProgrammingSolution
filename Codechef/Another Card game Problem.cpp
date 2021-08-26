//https://www.codechef.com/problems/CRDGAME3
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int pc, pr;
	    cin >> pc >> pr;
	    int digit_chef;
	    int digit_rick;
	    if(pc%9!=0)
	        digit_chef = (pc/9)+1;
	    else
	        digit_chef = pc/9; 
	    if(pr%9!=0)
	        digit_rick = (pr/9)+1;
	    else
	        digit_rick = pr/9; 
	    
	    if(digit_chef < digit_rick)
	        cout << "0" << " " << digit_chef << endl;
	    else
	        cout << "1" << " " << digit_rick << endl;
	}
	return 0;
}
