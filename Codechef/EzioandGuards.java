
import java.util.*;


/* Name of the class has to be "Main" only if the class is public. */
class EzioandGuards
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0){
		    int x = sc.nextInt();
		    int y = sc.nextInt();
		    if(x>=y)
		        System.out.println("YES");
		    else    
		        System.out.println("NO");
		}
        sc.close();
	}
}
