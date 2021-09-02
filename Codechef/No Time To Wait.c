//https://www.codechef.com/problems/NOTIME
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120

#include <stdio.h>

int main(void) {
	// your code goes here
	int T[100];
	int x,H,N,i,flag;
	scanf("%d",&N);
	scanf("%d",&H);
	scanf("%d",&x);
	for(i=0;i<N;i++)
	{
	    scanf("%d",&T[i]);
	}
	for(i=0;i<N;i++)
	{
	    flag=0;
	    if(T[i] + x >= H)
	    {
	        flag=1;
	        break;
	    }
	}
	if(flag==1)
	{
	    printf("YES\n");
	}
	else
	{
	    printf("NO\n");
	}
	return 0;
}
