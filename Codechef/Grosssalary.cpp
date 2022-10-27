#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T,i;
	cin>>T;
	float x;
	for(i=0;i<T;i++)
	{
	    cin>>x;
	    if(x<1500)
	        printf("%.2f\n",2*x);
	    else
	    {
	        float ans = x + 500 + (x*0.98);
	        printf("%.2f\n",ans);
	    }
	}
	return 0;
}
