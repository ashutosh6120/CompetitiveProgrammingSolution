import java.io.*;
import java.util.*;


public class JavaEndoffile {
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
         Scanner sc = new Scanner(System.in);
        int i = 0;
        while (sc.hasNext()) {
            String line = sc.nextLine();
            i++;
            System.out.println(Integer.toString(i) + " " + line);
        }
    }
}
