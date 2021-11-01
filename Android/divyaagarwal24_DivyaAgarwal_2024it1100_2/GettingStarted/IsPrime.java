import java.util.*;
public class IsPrime {
    public static void main(String[] args) {
      Scanner scn = new Scanner(System.in);
      int t,i;
       
        t=scn.nextInt();
      for(i=0;i<t;i++)
      {
          int n,j,flag=0;
           n=scn.nextInt();
           for(j=2;j<=n/2;j++)
           {
               if(n%j==0)
               {
               System.out.println("not prime");
               flag=1;
               break;
               }
           }
           if(flag==0)
           System.out.println("prime");
           
          
      }
    
    }
  }
    

