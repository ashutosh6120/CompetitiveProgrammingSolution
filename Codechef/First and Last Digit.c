////https://www.codechef.com/problems/FLOW004
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120


#include <stdio.h>

int main(void) {
	// your code goes here
	int t,sum=0;
	scanf("%d",&t);
	while(t--)
	{
	    int f,l,n;
	    scanf("%d",&n);
	    l=n%10;
	    f=n;
	    while(n>=10)
	    {
	        n=n/10;
	    }
	    f=n;
	    sum=f+l;
	    printf("%d\n",sum);
	}
	return 0;
}
