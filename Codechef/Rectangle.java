import java.util.*;

/* Name of the class has to be "Main" only if the class is public. */
class Rectangle
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0){
		    int a=sc.nextInt();
		    int b=sc.nextInt();
		    int c=sc.nextInt();
		    int d=sc.nextInt();
		    if(a==b && c==d){
		     System.out.println("YES");
		    }
    		 else if(a==c && b==d){
    		     System.out.println("YES");
    		 }   
    		 else if(a==d && b==c){
    		     System.out.println("YES");
    		 }   
    		 else{
    		     System.out.println("NO");
    		 }   
		}
        sc.close();
	}
}

