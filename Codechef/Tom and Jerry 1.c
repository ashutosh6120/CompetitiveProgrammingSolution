//https://www.codechef.com/problems/TANDJ1
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120


#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
	// your code goes here
	int i,t,a,b,c,d,k,dist;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d %d %d %d %d", &a, &b, &c, &d, &k);
	    dist = abs(a-c) + abs(b-d);
	    if(k>=dist && k%2==dist%2)
	        printf("YES\n");
	    else
	        printf("NO\n");
	}
	return 0;
}
