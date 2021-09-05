//https://www.codechef.com/problems/T20MCH
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120


#include <stdio.h>

int main(void) {
    //R- team A final score
    //O- over played by team B
    //C- team B runs scored
	// your code goes here
	int R,O,C,overRemain,finalB_runs,times,maxscore,maxruns;
	maxscore=6;
	scanf("%d",&R);
	scanf("%d",&O);
	scanf("%d",&C);
	overRemain = 20 - O;
	times= overRemain * maxscore;
	maxruns = times * maxscore;
	finalB_runs = C + maxruns;
	if(finalB_runs > R)
	{
	    printf("YES\n");
	}
	else
	{
	    printf("NO\n");
	}
	return 0;
}