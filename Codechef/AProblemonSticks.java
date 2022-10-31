/* package codechef; // don't place package name! */

import java.util.*;


/* Name of the class has to be "Main" only if the class is public. */
class AProblemonSticks
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0){
		    int n=sc.nextInt();int a[]=new int[n];
		    for(int i=0;i<n;i++){
		        a[i]=sc.nextInt();
		    }
		    HashSet<Integer> hs=new HashSet<Integer>(); 
		       for(int i=0;i<a.length;i++){
		           if(a[i]!=0){
		           hs.add(a[i]);
		           }
		       }
		       
		    System.out.println(hs.size());
		}
        sc.close();
	}
}

