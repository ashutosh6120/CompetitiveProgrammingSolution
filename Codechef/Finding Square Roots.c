//https://www.codechef.com/problems/FSQRT
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120


#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
	// your code goes here
    int t,i,n;
    float sq;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);
        sq=sqrt(n);
        printf("%d\n",(int)sq);
    }
	return 0;
}