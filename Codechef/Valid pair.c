//https://www.codechef.com/APRIL21C/problems/SOCKS1
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120


#include <stdio.h>

int main(void) {
	// your code goes here
	int A,B,C;
	scanf("%d",&A);
	scanf("%d",&B);
	scanf("%d",&C);
	if (A == B || B == C || C ==A )
	{
	    printf("YES");
	}
	else
	    printf("NO");
	return 0;
}

