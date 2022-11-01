/* package codechef; // don't place package name! */

import java.util.*;

/* Name of the class has to be "Main" only if the class is public. */
class TestingRobot
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0)
		{
		    int n=sc.nextInt(),x=sc.nextInt();
		    String str=sc.next();
		    Set<Integer>set = new HashSet<>();
		    set.add(x);
		    for(int i=0;i<n;i++)
		    {
		        if(str.charAt(i)=='R')
		        {
		            x+=1;
		            set.add(x);
		        }
		        else
		        {
		            x-=1;
		            set.add(x);
		        }
		    }
		    System.out.println(set.size());
		}
        sc.close();
	}
}

