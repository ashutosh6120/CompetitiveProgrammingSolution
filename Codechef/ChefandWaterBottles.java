import java.util.*;
/* Name of the class has to be "Main" only if the class is public. */
class ChefandWaterBottles
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0){
		    int n = sc.nextInt();
		    int x = sc.nextInt();
		    int k = sc.nextInt();
		    int res = n * x;
		    if(k<=res)
		        System.out.println(k/x);
		    else    
		        System.out.println(n);
		}
        sc.close();
	}
}
