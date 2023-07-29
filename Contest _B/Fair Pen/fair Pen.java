import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /*
         * Enter your code here. Read input from STDIN. Print output to STDOUT. Your
         * class should be named Solution.
         */
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            int arr[] = new int[n];
            int maxx = 0;
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
                maxx = Math.max(maxx, arr[i]);
            }
            for (int i = 0; i < n; i++) {
                arr[i] += maxx;
                System.out.print(arr[i] + " ");
            }
            System.out.println();

        }
    }
}