import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();

        int k = n / 2;
        int m = 1;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= k; j++) {
                System.out.print("\t");
            }

            for (int j = 1; j <= m; j++) {
                System.out.print("*\t");
            }

            if (i <= n / 2) {
                k--;
                m += 2;
            } else {
                k++;
                m -= 2;
            }

            System.out.println();
        }

    }
}