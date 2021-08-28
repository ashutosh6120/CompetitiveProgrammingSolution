//http://www.codechef.com/problems/FLOW002
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120


#include <stdio.h> 
int main() {
	// Read the number of test cases.
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		int ans = a%b;
		printf("%d\n", ans);
	}
	return 0;
}