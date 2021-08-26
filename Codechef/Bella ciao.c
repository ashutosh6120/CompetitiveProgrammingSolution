//https://www.codechef.com/JUNE21C/problems/CHFHEIST
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120

#include <stdio.h>

int main(void) {
	// your code goes here
	//d-indicates after 'd' days increase the 'q' amt.
	int t,i;
	long long D,d,p,q,res,rem,result,val;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%lld %lld %lld %lld",&D, &d, &p, &q);
	    rem = D/d;
	    if(D*d==0)
	    {
	        res=p*rem*d + q * (rem-1) * rem * d/2;
	        printf("%lld\n",res);
	    }
	    else
	    {
	        res = p * rem * d + q * (rem-1) * rem * d/2;
	        val = D % d;
	        res = res + val * (p+rem*q);
	        printf("%lld\n",res);
	    }
	}
	return 0;
}

