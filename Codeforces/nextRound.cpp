//https://codeforces.com/contest/158/problem/A
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120


#include <iostream>
#include <bits/stdc++.h> 
using namespace std; 

int main()
{
    int i,n,k,count=0;
    int a[100];
    cin >> n >> k;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0) continue;
        if(a[i]>=a[k-1])
        {
            count++;
        }
        
    }
    cout << count << endl;
}