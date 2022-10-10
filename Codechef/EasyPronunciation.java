import java.util.*;


/* Name of the class has to be "Main" only if the class is public. */
class EasyPronunciation
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0){
		    int n = sc.nextInt();
		    String s = sc.next();
		    easypro(s,n);
		}
        sc.close();
	}
	
	static void easypro(String s, int n){
	    int count = 0;
        for (int i = 0; i < n; i++) {
            char ch = s.charAt(i);
            if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') count++;
            else count = 0;
            if (count >= 4) break;
        }
        if(count >= 4) 
            System.out.println("NO");
        else 
            System.out.println("YES");
	}
}