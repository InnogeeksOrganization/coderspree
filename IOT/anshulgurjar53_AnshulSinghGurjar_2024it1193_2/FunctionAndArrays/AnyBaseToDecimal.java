import java.util.*;
  
  public class Main{
  
  public static void main(String[] args) {
      Scanner scn = new Scanner(System.in);
      int n = scn.nextInt();
      int b = scn.nextInt();
      int d = getValueIndecimal(n, b);
      System.out.println(d);
   }
  
   public static int getValueIndecimal(int n, int b){
      // write your code here
      int c=0,s=0;
      while(n>0)
      {
          int a=n%10;
          s=(int)(s+a*Math.pow(b,c++));
          n/=10;
      }
      return s;
   }
  }