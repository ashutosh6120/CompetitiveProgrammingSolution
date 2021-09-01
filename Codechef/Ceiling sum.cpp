//https://www.codechef.com/START7C/problems/CEILSUM
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120


#include <iostream>
#include <cmath>
#include<climits>
using namespace std;

int main() 
{
    int t,n1,n2;
    cin>>t;
    while(t--)
    {
        double a,b;
        cin >> a >>b;
        long int x,f,s,res;
        if(a==b)    
            res=0;
        else if(a>b)
            res = (ceil((b-(a-1))/2)+ceil(((a-1)-a)/2));
        else
            res = (ceil((b-(a+1))/2)+ceil(((a+1)-a)/2));
        cout<< res <<endl;
    }
	// your code goes here
	return 0;
}