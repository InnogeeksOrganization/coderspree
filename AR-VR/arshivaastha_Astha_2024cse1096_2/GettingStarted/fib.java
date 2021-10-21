import java.util.*;
  
  public class Main{
  
  public static void main(String[] args) {
      Scanner sc=new Scanner(System.in);
      int n=sc.nextInt();
      int i,a=0,b=1,c=0;
      if(n<0)
      return;
      System.out.println(a + " ");
      for(i=1;i<n;i++)
      {
        System.out.println(b + " ");
        c=a+b;
        a=b;
        b=c;
      }// write your code here
  }
}