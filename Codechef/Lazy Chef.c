//https://www.codechef.com/START4C/problems/LAZYCHF
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120

#include <stdio.h>

int main(void) {
	// your code goes here
	int t,i,x,m,d;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d",&x);
	    scanf("%d",&m);
	    scanf("%d",&d);
	    int res1=m*x;
	    int res2=x+d;
	    if(res1<res2)
	        printf("%d\n",res1);
	    else
	        printf("%d\n",res2);
	}
	return 0;
}

