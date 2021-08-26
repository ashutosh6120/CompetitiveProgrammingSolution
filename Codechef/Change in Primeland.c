//https://www.codechef.com/problems/CNG
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120


#include <stdio.h>

int main(void) {
	// your code goes here
	int t,i;
	long int a,b,c;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%ld",&a);
	    scanf("%ld",&b);
	    c=(a*b)-a-b;
	    printf("%ld\n",c);
	}
	return 0;
}