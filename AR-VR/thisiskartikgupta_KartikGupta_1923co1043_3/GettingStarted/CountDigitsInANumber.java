import java.util.Scanner;

public class CountDigitsInANumber {

  public static void main() {
    Scanner sc = new Scanner(System.in);

    int n = sc.nextInt(), count = 0;

    while(n != 0) {
        n = n/10;
        count++;
    }

    System.out.println(count);
    sc.close();
  }
}