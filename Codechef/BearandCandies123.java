
import java.util.*;


/* Name of the class has to be "Main" only if the class is public. */
class BearandCandies123
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0){
		    int a = sc.nextInt();
		    int b = sc.nextInt();
		    int nn=1;
		    int s1=0;
		    int s2=0;
		    while(s1<=a&&s2<=b){
		        if(nn%2==0){
		            s2=s2+nn;
		        }
		        else{
		            s1=s1+nn;
		        }
		        nn++;
		    }
		    if(s1>a) System.out.println("Bob");
		    else System.out.println("Limak");
		    
		}
        sc.close();
	}
}
