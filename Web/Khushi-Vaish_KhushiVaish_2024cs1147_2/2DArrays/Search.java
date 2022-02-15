import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int[][] arr = new int[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                arr[i][j] = scn.nextInt();
            }
        }
        int flag = 0;
        int data = scn.nextInt();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (arr[i][j] == data) {
                    flag = 1;
                    System.out.println(i);
                    System.out.println(j);
                }
            }
        }
        if (flag != 1) {
            System.out.print("Not Found");
        }
    }
}
