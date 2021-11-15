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
    int r=1,temp=0;
    while (n > 0)
    {
      temp = temp + (n % b)*r;
      r=r*10;
      n = n / b;
    }
    return temp;
  }
}