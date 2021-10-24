import java.util.*;

public class GcdAndLcm {

  static long HCF(long a, long b) {
    if(b == 0)
        return a;
    return HCF(b, a%b);
  }
  public static void main(String[] args) {

      Scanner sc = new Scanner(System.in);
      long num1 = sc.nextLong();
      long num2 = sc.nextLong();

      sc.close();

      long hcf = HCF(num1, num2);
      long lcm = (num1 * num2) / hcf;

      System.out.print(hcf + "\n" + lcm);
  }
}