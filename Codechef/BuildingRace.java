import java.util.*;


/* Name of the class has to be "Main" only if the class is public. */
class BuildingRace
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner (System.in);
		int t = sc.nextInt();
		while ( t--> 0) {
		    float a = sc.nextFloat();
		    float b = sc.nextFloat();
		    float x = sc.nextFloat();
		    float y = sc.nextFloat();
		    
		    if (a / x < b / y)
		    System.out.println("Chef");
		    else if (a / x > b / y)
		    System.out.println("Chefina");
		    else
		    System.out.println("Both");
		}
        sc.close();
	}
}

