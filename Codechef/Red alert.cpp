//https://www.codechef.com/LTIME98C/problems/REDALERT
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120


#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n,d,h;
	    cin >> n >> d >> h;
	    int a[n];
	    int sum=0,flag=0;
	    for(int i=0;i<n;i++)
	    {
	        cin >> a[i];
	        if(a[i]>0)
	            sum=sum+a[i];
	        else
	        {
	           sum=max(sum-d,0);
	        }
	    if(sum>h)
	        flag=1;
	    }
	    if(flag==1)
	       cout << "YES" << endl;
	    else
	        cout << "NO" << endl;
	}
	return 0;
}
