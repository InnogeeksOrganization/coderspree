import java.util.*;
   
   public class Main{
   
   public static void main(String[] args) {
    Scanner sc= new Scanner (System.in);
    
    int num,i;
       num=sc.nextInt();
       int n= num;
       while(n!=0)
       {
           int a=n%10;
           System.out.println(a);
           n=n/10;
       }
   }
   }