//https://www.codechef.com/APRIL21C/problems/BOLT
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	// your code goes here
	int i,t;
	float k1,k2,k3,v,total,actualTime,value;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%f",&k1);
	    scanf("%f",&k2);
	    scanf("%f",&k3);
	    scanf("%f",&v);
	    total=k1*k2*k3*v;
	    actualTime=100/total;
	    value=((int)(actualTime * 100 + .5)/100.0);
	    if (value <= 9.57)
    	{
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	}
	return 0;
}

