//https://www.codechef.com/MAY21C/problems/LKDNGOLF
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120

#include <stdio.h>

int main(void) {
	// your code goes here
	int t,i,n,x,k,res;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d",&n);
	    scanf("%d",&x);
	    scanf("%d",&k);
	    res=(n+1)%k;
	    if(x%k==0 || x%k==res)
	        printf("YES\n");
	    else
	        printf("NO\n");
	}
	return 0;
}

