//https://codeforces.com/contest/4/problem/A
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120


#include<stdio.h>
int main()
{
    int w;
    scanf("%d",&w);
    if(w%2 == 0 && w>2)
        printf("YES");
    else
        printf("NO");
}
