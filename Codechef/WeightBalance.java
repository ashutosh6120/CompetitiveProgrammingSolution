import java.util.*;


/* Name of the class has to be "Main" only if the class is public. */
class WeightBalance
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0){
		    int w1 = sc.nextInt();
		    int w2 = sc.nextInt();
		    int x1 = sc.nextInt();
		    int x2 = sc.nextInt();
		    int M = sc.nextInt();
		    int val1 = w2 - w1;
		    int mini = x1 * M;
		    int maxi = x2 * M;
		    if(val1 >= mini && val1<=maxi)
		        System.out.println("1");
		    else
		        System.out.println("0");
		}
        sc.close();
	}
}
