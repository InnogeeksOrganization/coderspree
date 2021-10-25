import java.util.*;

public class PythagoreanTriplet {
  public static void main() {
    Scanner sc =new Scanner(System.in);
    long a = sc.nextLong(), b = sc.nextLong(), c = sc.nextLong();

    if( (a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b))
        System.out.println("true");
    else
        System.out.println("false");

    sc.close();
  }
}
