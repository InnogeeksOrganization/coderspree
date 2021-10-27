import java.util.*;
  
  public class Main{
  
  public static void main(String[] args) {
      Scanner scn = new Scanner(System.in);
  
       // write ur code here
       int t = scn.nextInt();
       Main ob= new Main();
       
       for ( int i =0; i<t;i++)
       {
           int n =scn.nextInt();
           
         ob.isPrime(n);
       }
  
   }
   void isPrime(int n)
   {int t=0;
       for (int i=2;i<n;i++)
       {if(n%i==0)
       t++;
        break;   
       }if(t>0)
       System.out.println("not prime");
       else
       System.out.println("prime");
   }
  }