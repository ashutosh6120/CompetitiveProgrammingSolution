import java.util.*;


/* Name of the class has to be "Main" only if the class is public. */
class PodiumFinish
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0){
		    int a = sc.nextInt();
		    int b = sc.nextInt();
		    System.out.println(a+b);
		}
        sc.close();
	}
}
