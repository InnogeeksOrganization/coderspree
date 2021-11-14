import java.util.*;
   
   public class Main{
   
   public static void main(String[] args) {
         Scanner scn = new Scanner(System.in);
 int n = scn.nextInt();
int c=0,d;  
  while(n!=0)
  {
      d=n%10;
    System.out.println(d);
     n=n/10;
  } 
    }
   }