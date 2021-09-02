//https://www.codechef.com/LTIME96C/problems/HOOPS
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120

#include <stdio.h>
int main(void) {
	// your code goes here
	int t,i,n,k;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d",&n);
	    if(n==1)
	        printf("1\n");
	    if(n>1)
	        printf("%d\n",n-(n/2));
	}
	return 0;
}