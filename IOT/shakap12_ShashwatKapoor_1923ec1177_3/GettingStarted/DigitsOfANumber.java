import java.util.*;
    
    public class Main{
    
    public static void main(String[] args) {
      // write your code here  
      Scanner sc=new Scanner(System.in);
      int n=sc.nextInt();
      String s=Integer.toString(n);
      for(int x=0;x<s.length();x++){
          System.out.println(s.charAt(x));
      }
     }
    }