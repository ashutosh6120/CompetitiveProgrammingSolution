//https://www.codechef.com/MAY21C/problems/SOLBLTY
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120

#include <stdio.h>

int main(void) {
	// your code goes here
	int t,i,x,a,b,val,result;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d",&x);
	    scanf("%d",&a);
	    scanf("%d",&b);
	    val=a+(100-x)*b;
	    result=val*10;
	    printf("%d\n",result);
	}
	return 0;
}

