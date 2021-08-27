//https://www.codechef.com/LTIME95C/problems/SLOOP
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120

#include <stdio.h>

int main(void) {
	// your code goes here
	int i,t,m,s,rem;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d",&m);
	    scanf("%d",&s);
	    rem=m/s;
	    printf("%d\n",rem);
	}
	return 0;
}

