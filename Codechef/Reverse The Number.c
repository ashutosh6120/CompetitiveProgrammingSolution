//https://www.codechef.com/problems/FLOW007
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120

#include <stdio.h>
int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,rev=0,rem;
	    scanf("%d",&n);
	    while(n!=0)
	    {
	        rem=n%10;
	        rev=rev*10+rem;
	        n=n/10;
	    }
	    printf("%d\n",rev);
	}
	return 0;
}
