import java.util.*;

/* Name of the class has to be "Main" only if the class is public. */
class Incrementordecrement
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		if(n%4!=0)
		    System.out.println(n-1);
		else
		    System.out.println(n+1);
        sc.close();
	}
}
