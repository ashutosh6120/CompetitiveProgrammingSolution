import java.util.*;
import java.lang.*;

/* Name of the class has to be "Main" only if the class is public. */
class NqueenPuzzleSolved
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0){
		    double n = sc.nextInt();
		    double val = Math.pow((0.143 * n),n);
		    //double res = Math.floor(val);
		    System.out.println((int)(Math.round(val)));
		}
        sc.close();
	}
}