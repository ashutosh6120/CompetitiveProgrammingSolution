import java.util.*;

/* Name of the class has to be "Main" only if the class is public. */
class ChefandRaces
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
	    int n = sc.nextInt();
	    while(n-->0){
	        int a = sc.nextInt();
	        int b = sc.nextInt();
	        int x = sc.nextInt();
	        int y = sc.nextInt();
	        
	        if((x==a || x==b) && (y==a || y==b)){
	            System.out.println("0");
	        }
	        else if(x!=a && x!=b && y!=a && y!=b){
	            System.out.println("2");
	        }
	        else{
	            System.out.println("1");
	        }
	    }
        sc.close();
	}
}
