import java.util.*;


/* Name of the class has to be "Main" only if the class is public. */
class TheLastLevels
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0){
		    int x = sc.nextInt();
		    int y = sc.nextInt();
		    int z = sc.nextInt();
		    int count = 0;
		    if(x<=3){
		        System.out.println(x*y);
		    }
		    else if(x>3){
		        for(int i=3;i<x;i+=3){
		            count++;
		        }
		        System.out.println((x*y)+(count*z));
		        
		    }
		}
        sc.close();
	}
}
