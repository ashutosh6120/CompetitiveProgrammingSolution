import java.util.*;

/* Name of the class has to be "Main" only if the class is public. */
class CoinFlip
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0){
		    int g = sc.nextInt();
		    while(g-->0){
		        int i = sc.nextInt();
		        int n = sc.nextInt();
		        int q = sc.nextInt();
		        if(n%2 == 0){
		            System.out.println(n/2);
		        }
		        else{
		            if(i!=q)
		                System.out.println((n/2)+1);
		            else
		                System.out.println(n/2);
		        }
		    }
		}
        sc.close();
	}
}
