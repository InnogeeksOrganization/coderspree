import java.util.*;

public class isANumberPrime {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int t = sc.nextInt();
    
    while(t-- != 0) {
        int n = sc.nextInt();
        boolean isPrime = true;
        for(int i = 2; i <= n/2; i++) {
            if(n % i == 0) {
                isPrime = false;
            }
        }
        
        if(isPrime)
          System.out.println("prime");
          
          else
              System.out.println("not prime");
    }
  }
}
