//https://www.codechef.com/COOK130C/problems/VISA
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120

#include <stdio.h>

int main(void) {
	// your code goes here
	int t,i,x1,y1,x2,y2,z1,z2;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d %d %d %d %d %d", &x1, &x2, &y1, &y2, &z1, &z2);
	    if(x1<=x2 && y1<=y2 && z1>=z2)
	        printf("YES\n");
	    else
	        printf("NO\n");
	}
	return 0;
}

