import java.util.*;

public class q3 {

  public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);

    int n;
    n = scn.nextInt();
    int i, j;
    for (i = 1; i <= n; i++) {

      for (j = 1; j <= n; j++) {
        if (j <= 5 - i)
          System.out.print("\t");
        else if (j > 5 - i && j < n)
          System.out.print("*\t");
        else if (j == n)
          System.out.print("*");
      }
      System.out.println();
    }
  }
}