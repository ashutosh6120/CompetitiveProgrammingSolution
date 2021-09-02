//https://www.codechef.com/problems/HOLES
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    char str[100];
	    cin >> str;
	    int x=0;
	    for(int i=0;i<strlen(str);i++){
	        if(str[i] == 'A') 
	            x=x+1;
	        else if (str[i] == 'B') 
	            x=x+2;
	        else if(str[i] == 'D')
	            x=x+1;
	        else if(str[i] == 'O') 
	            x=x+1;
	        else if(str[i] == 'P') 
	            x=x+1;
	        else if(str[i] == 'Q') 
	            x=x+1;
	        else if(str[i] == 'R')
	            x=x+1;
	        else 
	            x=x+0;
	    }
	    cout<<x<<endl;
	}
	return 0;
}
