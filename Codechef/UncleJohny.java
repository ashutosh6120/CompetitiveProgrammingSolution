import java.util.*;

/* Name of the class has to be "Main" only if the class is public. */
class UncleJohny
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0){
		    int n = sc.nextInt();
		    int[] arr = new int[n];
		    for(int i=0;i<n;i++){
		        arr[i] = sc.nextInt();
		    }
		    int k = sc.nextInt();
		    int val = arr[k-1];
		    Arrays.sort(arr);
		    for(int i=0;i<n;i++){
		        if(val == arr[i]){
		            System.out.println(i+1);
		        }
		    }
		}
        sc.close();
	}
}
