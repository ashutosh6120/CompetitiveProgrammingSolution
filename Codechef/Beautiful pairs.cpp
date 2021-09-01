//https://www.codechef.com/LTIME98C/problems/BUTYPAIR
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120


#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    long int n,i,s=0;
	    cin >> n;
	    unordered_map<long int ,int>m;
	    long int a[n];
	    for(i=1;i<=n;i++)
	    {
	        cin>>a[i];
	        m[a[i]]=0;
	    }
	    for(i=1;i<=n;i++)
	    {
	        m[a[i]]++;
	    }
	    for(auto x:m)
	    {
	        if(x.second>1)
	        {
	            long int c=(n-x.second);
	            c=c*(x.second);
	            s=s+c;
	        }
	        else
	        {
	            s=s+n-1;
	        }
	    }
	    std::cout << s << std::endl;
	}
	return 0;
}
