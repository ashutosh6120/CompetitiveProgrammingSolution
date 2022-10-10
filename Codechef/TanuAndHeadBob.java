import java.util.*;


/* Name of the class has to be "Main" only if the class is public. */
class TanuAndHeadBob
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0){
		    int n = sc.nextInt();
		    String s = sc.next();
		    logic(s,n);
		}
		sc.close();
	}
	
	public static void logic(String s, int n){
	        int N=0,y=0,i=0;
		    for(int j=0;j<n;j++)
		    {
		        if(s.charAt(j)=='I')
		            i++;
		        else if(s.charAt(j)=='Y')
		            y++;
		        else 
		            N++;
		    }
		    if(i>0)
		        System.out.println("INDIAN");
		    else if(i==0 && y>0)
		        System.out.println("NOT INDIAN");
		    else 
		        System.out.println("NOT SURE");
	}
}

