//https://www.codechef.com/problems/LINCHESS
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n,k,ans=-1;
	    int min=1000000000;
	    cin >> n >> k;
	    int p[n];
	    for(int i=0;i<n;i++){
	        cin >> p[i];
	    }
	    for(int i=0;i<n;i++)
	    {
            if(k%p[i]==0)
            {
                int count=0;
                count=k/p[i];
                if(min>count)
                {
                    min=count;
                    ans=p[i];
                }
            }
        }
            cout<<ans<<endl;
    }
	return 0;
}
