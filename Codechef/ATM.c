//https://www.codechef.com/problems/HS08TEST
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120


#include <stdio.h>

int main(void) {
	// your code goes here
	int x;
	float initbalance,finalbalance;
	scanf("%d",&x);
	scanf("%f",&initbalance);
	if(x%5==0)
	{
	    finalbalance = initbalance - (x + 0.5);
	    if(finalbalance<0)
	        printf("%.2f",initbalance);
	    else
	        printf("%.2f",finalbalance);
	}
	else
	{
	    printf("%.2f",initbalance);
	}
	return 0;
}
