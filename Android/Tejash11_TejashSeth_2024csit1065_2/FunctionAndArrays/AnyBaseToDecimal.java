import java.util.*;

public class Main {

  public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);
    int n = scn.nextInt();
    int b = scn.nextInt();
    int dn = getValueInBase(n, b);
    System.out.println(dn);
  }

  public static int getValueInBase(int n, int b) {
    int i=0,sum=0;
    while (n > 0)
    {
        sum += (n%10)*Math.pow(b,i);
        i++;
        n = n / 10;
    }
    return sum;
  }
}