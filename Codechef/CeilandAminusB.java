import java.util.*;


/* Name of the class has to be "Main" only if the class is public. */
class CeilandAminusB
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		if((a-b)%10==9)
       {
    	   System.out.println(a-b-1);
       }
       else {
    	   System.out.println(a-b+1);
       }
       sc.close();
	}
}