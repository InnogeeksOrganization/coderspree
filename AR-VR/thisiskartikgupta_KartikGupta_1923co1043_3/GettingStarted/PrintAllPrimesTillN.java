import java.util.*;

public class PrintAllPrimesTillN {

  static boolean isPrime(int n) {
    for(int i = 2; i * i <= n; i++)
        if(n % i == 0)
            return false;

    return true;
}

  public static void main(String[] args) {
      // write your code here

      Scanner sc = new Scanner(System.in);

      int low = sc.nextInt();
      int high = sc.nextInt();

      for(int i = low; i <= high; i++)
      if(isPrime(i))
          System.out.println(i);
  }
}