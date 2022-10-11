import java.util.*;


/* Name of the class has to be "Main" only if the class is public. */
class ChefandGroups
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0){
		    String s = sc.next();
		    int f=0;
		    int groups=0;
		    for(int i=0;i<s.length();i++){
		        char test=s.charAt(i);
		        if(test=='1'){
		            if(f==0){
		                f=1;
		                groups++;
		            }
		        }else
		         f=0;
		    }
		    System.out.println(groups);
		}
        sc.close();
	}
}

