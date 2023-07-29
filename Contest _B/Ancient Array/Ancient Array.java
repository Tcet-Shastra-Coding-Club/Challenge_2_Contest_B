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
            int[] arr = new int[n];
            int count = 0, sum = 0;
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
                if (sum < arr[i]) {
                    sum += arr[i];
                    count++;
                }
            }
            System.out.println(count == n ? "1" : "0");
        }
    }
}