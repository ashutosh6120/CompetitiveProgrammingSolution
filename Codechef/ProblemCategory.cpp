#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t)
	{
	    int x;
	    cin>>x;
	    
	    if(x>=1 && x<100)
	    {
	        cout<<"Easy\n";
	    }
	    
	    else if(x>=100 && x<200)
	    {
	        cout<<"Medium\n";
	    }
	    
	    else if(x>=200 && x<=300)
	    {
	        cout<<"Hard\n";
	    }
	    
	    t--;
	}
	return 0;
}
