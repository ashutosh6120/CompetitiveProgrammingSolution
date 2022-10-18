import java.util.*;

/* Name of the class has to be "Main" only if the class is public. */
class Idandship
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		for(int i=0;i<t;i++){
		    char ch = sc.next().charAt(0);
		    if(ch=='B'||ch=='b'){
		        System.out.println("BattleShip");
		    }
		    else if(ch=='C'||ch=='c'){
		            System.out.println("Cruiser");
		    }
		    else if(ch=='D'||ch=='d'){
		            System.out.println("Destroyer");
		    }
		    else if(ch=='F'||ch=='f'){
		            System.out.println("Frigate");
		    }
		}
        sc.close();
	}
}

