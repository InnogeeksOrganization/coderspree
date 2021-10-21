import java.util.*;
   
   public class Main{
   
   public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);
       int n = sc.nextInt();
       while(n!=0)
       {
           int rev = n%10;
           System.out.println(rev);
           n=n/10;
       }
    }
   }