import java.util.*;

class Main {

    public static void main(String[] args) throws Exception {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int[][] arr = new int[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                arr[i][j] = scn.nextInt();
            }
        }
        int colno = 0, min = 0;
        for (int i = 0; i < n; i++) {
            min = arr[i][0];
            for (int j = 0; j < n; j++) {
                if (min > arr[i][j]) {
                    min = arr[i][j];
                    colno = j;
                }
            }
            boolean Ans = true;
            for (int r = 0; r < n; r++) {
                if (min < arr[r][colno]) {
                    Ans = false;
                    break;
                }
            }
            if (Ans == true) {
                System.out.print(min);
                return;
            }
        }
        System.out.print("Invalid Input");
    }
}