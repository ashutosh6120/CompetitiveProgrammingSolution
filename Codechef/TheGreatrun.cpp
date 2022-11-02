#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int a[n], count=0,sum=0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<=n-k;i++)
        {
            for(int j=i;j<i+k;j++){
                sum+=a[j];
            }
            if(sum>count)
            {
                count=sum;

            }

            sum=0;

        }
        cout<<count<<endl;
	}
	return 0;
}
