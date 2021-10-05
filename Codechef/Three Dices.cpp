//https://www.codechef.com/problems/THREDICE
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120

#include <iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int main(void) {
	// your code goes here
	int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
       int sum=x+y;
       float res;
       if(sum<6)
        res=float(float(6-sum)/float(6));
        else res=0;
        cout<<res<<endl;
    }
	return 0;
}