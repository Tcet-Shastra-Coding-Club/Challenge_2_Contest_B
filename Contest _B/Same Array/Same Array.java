import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();

        while (t-- > 0) {
            int n = scanner.nextInt();

            int[] arr = new int[n];
            int[] brr = new int[n];

            for (int i = 0; i < n; i++)
                arr[i] = scanner.nextInt();

            for (int i = 0; i < n; i++)
                brr[i] = scanner.nextInt();

            Arrays.sort(arr);
            Arrays.sort(brr);

            boolean flag = true;
            for (int i = 0; i < n; i++) {
                if (arr[i] != brr[i]) {
                    flag = false;
                    break;
                }
            }

            if (flag)
                System.out.println("true");
            else
                System.out.println("false");
        }
    }
}
