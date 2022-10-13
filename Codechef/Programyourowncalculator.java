import java.util.*;


/* Name of the class has to be "Main" only if the class is public. */
class Programyourowncalculator
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		int res;
		char c = sc.next().charAt(0);
		switch(c){
		    case '+':
		            res=a+b;
		           System.out.println(res);
		           break;
		    case '-':
		            res = a-b;
		            System.out.println(res);
		            break;
		    case '*':
		            res = a * b;
		            System.out.println(res);
		            break;
		    case '/':
		            System.out.println(((double)a/b));
		            break;
		        
		}
		sc.close();
	}
}