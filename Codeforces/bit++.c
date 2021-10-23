//https://codeforces.com/contest/282/problem/A
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120



#include <stdio.h>

int main(void) {
	// your code goes here
	int i,t,x=0;
	char str[10];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf(" %s",str);
	    if(str[1]=='+')
	        x++;
	    else
	        x--;
	}
	printf("%d\n",x);
	return 0;
}
