
import java.util.*;

/* Name of the class has to be "Main" only if the class is public. */
class HelpingChef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0){
		    int n = sc.nextInt();
		    if(n<10){
		        System.out.println("Thanks for helping Chef!");
		    }
		    else{
		        System.out.println("-1");
		    }
		}
        sc.close();
	}
}
