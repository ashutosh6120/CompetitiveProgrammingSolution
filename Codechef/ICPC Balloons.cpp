//https://www.codechef.com/problems/BALLOON
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120

#include <iostream>
using namespace std;


int main(void) {
    int a[20];
    int t,n,flag;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]>0 && a[i]<=7)
            {
                flag=i+1;
            }
        }
    cout<<flag<<endl;
    }
	// your code goes here
	return 0;
}