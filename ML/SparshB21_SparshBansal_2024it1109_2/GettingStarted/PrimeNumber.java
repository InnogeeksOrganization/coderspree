import java.util.*;
  
  public class PrimeNumber{
  
  public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      int t= sc.nextInt();
      if(t%2==0)
      System.out.println("Prime Number");
      else if(t%2!=0)
      System.out.println("Not a Prime Number");
      sc.close();
   }
}
  