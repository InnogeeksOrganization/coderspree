import java.util.*;
  
  public class Main{
  
  public static void main(String[] args) {
      Scanner scn = new Scanner(System.in);
      int n = scn.nextInt();
      int b = scn.nextInt();
      int dn = getValueInBase(n, b);
      System.out.println(dn);
   }
  
   public static int getValueInBase(int n, int b){
       // write code here
       
      int s=0,c=0; 
       while(n>0)
       {
           
           int a=n%b;
           s=(int)(a*Math.pow(10,c++))+s;
           n/=b;
           
       }
       return s;
   }
  }