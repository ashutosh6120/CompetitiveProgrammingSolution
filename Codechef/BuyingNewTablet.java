import java.util.*;


/* Name of the class has to be "Main" only if the class is public. */
class BuyingNewTablet
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner s = new Scanner(System.in);
		int t = s.nextInt();
		while(t-->0){
		    int n=s.nextInt();
		    long b=s.nextLong();
		    long max=0;
		    while(n-->0)
		    {
		        long w=s.nextLong();
		        long h=s.nextLong();
		        long a=w*h;
		        long p=s.nextLong();
		        if(p>b)
		        continue;
		        else
		        {
		            if(max<a)
		            max=a;
		        }
		        
		    }
		    if(max==0)
		    System.out.println("no tablet");
		    else
		    System.out.println(max);
		    
		}
        s.close();
	}
}
