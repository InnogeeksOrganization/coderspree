import java.util.*;
   
   public class Main{
   
   public static void main(String[] args) {
     // write your code here
     Scanner sc=new Scanner(System.in);
     int n=sc.nextInt();
     String s=Integer.toString(n);
     for(int x=s.length()-1;x>=0;x--){
         System.out.println(s.charAt(x));
     }
    }
   }