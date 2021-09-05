//https://www.codechef.com/START8C/problems/PENALTY
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,i;
	cin >> t;
	while(t--)
	{
	    int arr[10],suma=0, sumb=0;
	    for(i=1;i<=10;i++)
	        cin >> arr[i];
	    for(i=1;i<=10;i=i+2)
	    {
	        suma+=arr[i];
	    }
	    for(i=2;i<=10;i=i+2)
	    {
	        sumb+=arr[i];
	    }
	    if(suma==sumb)
	        std::cout << "0" << std::endl;
	    if(suma > sumb)
	        cout<< "1" << endl;
	    if(sumb > suma)
	        cout << "2" << endl;
	}
	return 0;
}