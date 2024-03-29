//https://www.codechef.com/START5C/problems/TOTCRT
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120


#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin >> t;
	while(t--)
	{
	    unordered_map<string,int>mp;
	    cin >> n;
	    for(int i=0;i<3*n;i++)
	    {
	        string s;
	        int temp;
	        cin >> s >> temp;
	        if(mp.find(s) !=mp.end())
	        {
	            mp[s]+=temp;
	        }
	        else
	        {
	            mp.insert({s,temp});
	        }
	    }
	    vector<int> v;
	    for(auto i:mp)
	    {
	        v.push_back(i.second);
	    }
	    sort(v.begin(),v.end());
	    for(int i=0;i<v.size();++i)
	    {
	        cout << v[i] << " ";
	    }
	    cout << "\n";
	}
	return 0;
}
