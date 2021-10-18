import java.util.*;
  
  public class Main{
  
  public static void main(String[] args) {
      Scanner scn = new Scanner(System.in);
  
       int t = scn.nextInt();
       int n,i,j;
       int count=0;
       for(i=1;i<=t;i++)
       {
            n = scn.nextInt();
            for(j=1;j<=n;j++)
            {
               if(n%i==0)
                {
                   count++;
                }
                else
                {
                    count=count+0;
                }
            }
            if(count>2)
           {
               System.out.println("not prime");
           }
           else
           {
               System.out.println("prime");
           }
       }
       
           
  
   }
  }