import java.util.*;


/* Name of the class has to be "Main" only if the class is public. */
class CupFinals
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0){
		    int x = sc.nextInt();
		    int y = sc.nextInt();
		    int d = sc.nextInt();
		    if((x-y)>d || (y-x)>d){
		        System.out.println("NO");
		    }
		    else{
		        System.out.println("YES");
		    }
		}
        sc.close();
	}
}
