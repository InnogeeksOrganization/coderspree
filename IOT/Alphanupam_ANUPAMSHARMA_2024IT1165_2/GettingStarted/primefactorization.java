import java.util.Scanner;

public class Main {
   public static void main(String args[]){
      int n;
      Scanner sc = new Scanner(System.in);
            n = sc.nextInt();
      if(n>=2&&n<=1000000000){
      for(int i = 2; i<n; i++) {
         while(n%i == 0) {
            System.out.print(i+" ");
            n = n/i;
         }
      }
      if(n >2) {
         System.out.println(n);
      }
   }}
}