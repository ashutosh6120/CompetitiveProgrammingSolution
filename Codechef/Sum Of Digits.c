//http://www.codechef.com/problems/FLOW006
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120


#include <stdio.h>

int main(void) {
	// your code goes here
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    int a,sum=0;
	    scanf("%d\n",&a);
	    while(a){
	        sum+=a%10;
	        a=a/10;
	    }
	    printf("%d\n",sum);
	}
	return 0;
}
