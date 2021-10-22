import java.util.Scanner;

public class FibonacciTillNOfficial {

  public static void main(String[] args) {

    Scanner sc = new Scanner(System.in);

    int n = sc.nextInt(), f0 = 0, fn = 1;

    if(n == 0)
      return;

    if(n == 1) {
      System.out.println(f0);
      return;
    }

      if(n ==2) {
          System.out.println(f0 + "\n" + fn);
          return;
      }

      else
        System.out.println(f0 + "\n" + fn);

      for(int i = 0; i < n-2; i++) {
          int temp = fn;
          fn += f0;
          f0 = temp;
          System.out.println(fn);
      }
  }
}