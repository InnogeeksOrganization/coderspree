import java.util.*;
  
  public class Main{
  
  public static void main(String[] args) {
      // write your code here
      Scanner sc=new Scanner(System.in);
      int n=sc.nextInt();
      int a=0,b=1,c=0;
      System.out.println(a);
       System.out.println(b);
      for(int i=1;i<=n-2;i++)
      {
        c=a+b;
        a=b;b=c;
        System.out.println(c);
      }
      
   }
  }