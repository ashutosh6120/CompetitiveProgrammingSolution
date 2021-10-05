//https://www.codechef.com/JUNE21C/problems/COCONUT
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120

#include <stdio.h>

int main(void) {
	// your code goes here
	//let Xa=m and Xb=n;
	//let xa=x and xb=y;
	int t,x,y,i,m,n,res,res1,val;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d %d %d %d", &x, &y, &m, &n);
	    res=m/x;
	    res1=n/y;
	    val=res+res1;
	    printf("%d\n",val);
	}
	return 0;
}

