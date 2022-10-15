import java.util.*;

/* Name of the class has to be "Main" only if the class is public. */
class TheThreeTopics
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		int c = sc.nextInt();
		int x = sc.nextInt();
		if(x == a || x == b || x == c)
		    System.out.println("Yes");
		else
		    System.out.println("No");
        sc.close();
	}
}
