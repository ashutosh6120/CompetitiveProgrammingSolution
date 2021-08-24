import java.io.*;
import java.util.*;



public class JavaStringReverse {
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
         Scanner sc = new Scanner(System.in);
        String str = sc.next();
        boolean isPal = true;
        for (int i = 0; i < str.length() / 2; i++) {
            if (str.charAt(i) != str.charAt(str.length() - i - 1)) {
                isPal = false;
                break;
            }
        }
        if(isPal) {
            System.out.println("Yes");
        }
        else {
            System.out.println("No");
        }
    }
}
