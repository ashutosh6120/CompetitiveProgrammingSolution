/* package codechef; // don't place package name! */

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;


/* Name of the class has to be "Main" only if the class is public. */
class BalancedReversal
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int T=Integer.parseInt(br.readLine());
		while(T-->0){
		    int n=Integer.parseInt(br.readLine());
		    String s=(br.readLine());
		    char[] arr=s.toCharArray();
		    Arrays.sort(arr);
		    System.out.println(arr);
		}
	}
}
