import java.util.Scanner;

class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int[][] arr1 = new int[a][b];
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                arr1[i][j] = sc.nextInt();
            }
        }
        int c = sc.nextInt();
        int d = sc.nextInt();
        int[][] arr2 = new int[c][d];
        for (int i = 0; i < c; i++) {
            for (int j = 0; j < d; j++) {
                arr2[i][j] = sc.nextInt();
            }
        }

        if (b != c) {
            System.out.print("Invalid input");
            return;
        }
        int[][] ans = new int[a][d];
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < d; j++) {
                for (int k = 0; k < b; k++) {
                    ans[i][j] += (arr1[i][k] * arr2[k][j]);
                }
            }
        }
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < d; j++) {
                System.out.print(ans[i][j] + " ");
            }
            System.out.println();
        }
    }
}