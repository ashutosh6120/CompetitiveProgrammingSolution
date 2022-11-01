/* package codechef; // don't place package name! */

import java.util.*;


/* Name of the class has to be "Main" only if the class is public. */
class Mathisonandpanagrams
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int t= sc.nextInt();
		while(t-->0){
		   int arr[]=new int[26];
		   int sum=0;
		   for(int j=0;j<26;j++)
		    arr[j]=sc.nextInt();
		    
		   String s=sc.next();
		   int n=s.length();
		   
		   for(int j=0;j<n;j++)
		       arr[s.charAt(j)-97]=0;
		       
		   for(int j=0;j<26;j++)
		        sum+=arr[j];
		   System.out.println(sum);
		}
        sc.close();
	}
}
