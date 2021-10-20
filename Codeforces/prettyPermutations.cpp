//https://codeforces.com/contest/1541/problem/A
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120








#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,j,n;
	std::cin >> t;
	for(j=0;j<t;j++)
	{
	    std::cin >> n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        a[i] = i + 1;
	    }
	    
	    //if n is even
	    if(n%2==0)
	    {
	        for(int i=0;i<n;i+=2)
	        {
	            swap(a[i],a[i+1]);
	        }
	    }
	    else 
	    {
	        for(int i=0;i<n-1;i+=2)
	        {
	            swap(a[i],a[i+1]);
	        }
	        swap(a[n-2],a[n-1]);
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        cout<<a[i]<< " ";
	    }
	    cout << "\n";
	}
	return 0;
}
