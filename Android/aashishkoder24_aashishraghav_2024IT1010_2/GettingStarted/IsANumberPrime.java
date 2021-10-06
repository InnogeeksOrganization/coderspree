import java.util.*;
  
  public class Main{
  
  public static void main(String[] args) {
      Scanner scn = new Scanner(System.in);
      int t =scn.nextInt();
      int c=0;
      int n[]=new int[t];
      for(int i=0;i<t;i++)
      {
       n[i]=scn.nextInt();
      }
      for(int j=0;j<t;j++)
      {   if(n[j]!=1){
          for(int k=1;k<=n[j];k++)
          {
            if(n[j]%k==0)
              c++;
           
          }
          if(c==2)
           System.out.println("prime");
           else
            System.out.println("not prime");
          c=0;
      }
      else
      System.out.println("prime");
      
      }
      
  
   }
  }