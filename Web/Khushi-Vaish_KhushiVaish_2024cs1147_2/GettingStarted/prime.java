import java.util.*;
  
  public class Main{
  
  public static void main(String[] args) {
      Scanner scn = new Scanner(System.in);
  int t=scn.nextInt();
  for(int i=1;i<=t;i++)
  {
      int n=scn.nextInt();
      int d=0;
      for(int j=2;j<=n/2;j++)
      {
          if(n%j==0)
          d++;
      }
      if(d==0)
      System.out.println("prime");
      else
      System.out.println("not prime");
  }
  }
  }