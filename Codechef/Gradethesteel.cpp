#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T,i;
	cin>>T;
	float a,b,c;
	for(i=0;i<T;i++)
	{
	    cin>> a>>b>>c;
	    if(a>50)
	    {
	        if(b<0.7)
	        {
	            if(c>5600)
	                cout<<10<<endl;
	            else
	                cout<<9<<endl;
	        }
	        else
	        {
	            if(c>5600)
	                cout<<7<<endl;
	            else
	                cout<<6<<endl;
	        }
	    }
	    else
	    {
	        if(b<0.7)
	        {
	            if(c>5600)
	                cout<<8<<endl;
	            else
	                cout<<6<<endl;
	        }
	        else
	        {
	            if(c>5600)
	                cout<<6<<endl;
	            else
	                cout<<5<<endl;
	        }
	    }
	}
	return 0;
}
