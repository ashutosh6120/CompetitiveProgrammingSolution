//https://www.codechef.com/problems/LINCHESS
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120

/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */

public class Chef and Linear Chess {
    public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner scan = new Scanner(System.in);
		int t = scan.nextInt();
		while(t-->0)
		{
		    int n = scan.nextInt();
		    int k = scan.nextInt();
		    int x=0;
		    int max=0;
		    for(int i=0;i<n;i++)
		    {
		        x = scan.nextInt();
		        if(x>k)
		            continue;
		        if(k%x==0)
		        {
		            max = Math.max(max,x);
		        }
		    }
		    if(max==0)
		        System.out.println(-1);
		    else
		        System.out.println(max);
		}
	}
}
