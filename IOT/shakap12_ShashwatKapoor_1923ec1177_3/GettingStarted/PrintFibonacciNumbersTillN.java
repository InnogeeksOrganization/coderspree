import java.util.*;
  
  public class Main{
  
  public static void main(String[] args) {
      // write your code here
      Scanner sc=new Scanner(System.in);
      int n=sc.nextInt();
      int a=0,b=1,c;
      System.out.println(a);
      System.out.println(b);
      for(int x=3;x<=n;x++){
          c=a+b;
          System.out.println(c);
          a=b;
          b=c;
      }
      
      
   }
  }