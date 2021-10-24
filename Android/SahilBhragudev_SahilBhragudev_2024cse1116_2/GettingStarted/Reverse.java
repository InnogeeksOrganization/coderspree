import java.util.*;
   
   public class Reverse{
   
   public static void main(String[] args) {
     Scanner sc = new Scanner(System.in);
     int n = sc.nextInt();
     int digit;
     while(n!=0)
     {
         digit = n%10;
         System.out.println(digit);
         n=n/10;
     }
    }
   }