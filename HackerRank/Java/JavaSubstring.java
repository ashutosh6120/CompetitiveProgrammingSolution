import java.io.*;
import java.util.*;



public class JavaSubstring {
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        String s;
        s = sc.nextLine();
        int start = sc.nextInt();
        int end = sc.nextInt();
        System.out.println(s.substring(start,end));
    }
}
