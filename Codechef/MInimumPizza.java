import java.util.*;


/* Name of the class has to be "Main" only if the class is public. */
class MinimumPizza
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int test = sc.nextInt();
	    for ( int t=0; t<test; t++){
	        int a = sc.nextInt();
	        int b = sc.nextInt();
	        if((a*b)%4==0)
	            System.out.println((a*b)/4);
	       else 
	        System.out.println(((a*b)/4)+1);
	    }
        sc.close();
	}
}