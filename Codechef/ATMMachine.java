import java.util.*;

/* Name of the class has to be "Main" only if the class is public. */
class ATMMachine
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0){
		    int n = sc.nextInt();
		    int k = sc.nextInt();
		    int[] arr = new int[n];
		    String s = "";
		    for (int i=0;i<n;i++){
		        arr[i] = sc.nextInt();
		    }
		    for(int i=0;i<n;i++){
		        if(k>=arr[i]){
		            s = s+"1";
		            k = k-arr[i];
		        }else{
		            s = s+"0";
		        }
		    }
		    System.out.println(s);
		}
        sc.close();
	}
}
