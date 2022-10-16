import java.util.*;

/* Name of the class has to be "Main" only if the class is public. */
class ChessBoardDistance
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0){
		    int x1 = sc.nextInt();
		    int y1 = sc.nextInt();
		    int x2 = sc.nextInt();
		    int y2 = sc.nextInt();
		    int val1 = Math.abs(x1-x2);
		    int val2 = Math.abs(y1-y2);
		    System.out.println(Math.max(val1,val2));
		}
        sc.close();
	}
}
