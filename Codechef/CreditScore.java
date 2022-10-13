import java.util.*;


/* Name of the class has to be "Main" only if the class is public. */
class CreditScore
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int x = sc.nextInt();
		if(x>=750)
		    System.out.println("YES");
		else
		    System.out.println("NO");
        sc.close();
	}
}
