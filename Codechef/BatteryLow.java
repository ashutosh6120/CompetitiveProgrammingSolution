import java.util.*;

/* Name of the class has to be "Main" only if the class is public. */
class BatteryLow
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0){
		    int x = sc.nextInt();
		    if(x<=15)
		        System.out.println("Yes");
		    else
		        System.out.println("No");
		      
		}
		sc.close();
	}
}