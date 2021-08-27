//https://www.codechef.com/problems/CHEFWARS
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int h,p;
	    cin >> h >> p;
	    while(p!=0)
	    {
	        h=h-p;
	        if(h==0||p==0)
	            break;
	        p=p/2;         
	    }
	    if(h>p)
	        cout<<"0"<<endl;
	   else
	        cout<<"1"<<endl;
	}
	return 0;
}
