import java.util.*;

/* Name of the class has to be "Main" only if the class is public. */
class SelfDefenceTraining
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0){
		    int n = sc.nextInt();
		    int[] arr = new int[n];
		    int count = 0;
		    for (int i=0;i<n;i++){
		        arr[i] = sc.nextInt();
		        if(arr[i]>=10 && arr[i]<=60){
		            count++;
		        }
		    }
		    System.out.println(count);
		    
		}
        sc.close();
	}
}
