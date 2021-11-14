import java.util.*;
  
  public class Main{
  
  public static void main(String[] args) {
      Scanner scn = new Scanner(System.in);
      int n = scn.nextInt();
      int b1 = scn.nextInt();
     int  b2= scn.nextInt();
     int d=  getValue( n,  b1, b2);
     System.out.println(d);
     
   }
   
   public static int getValue(int n, int b1,int b2)
   {
       int dec = Indecimal(n,  b1);
       int dn = InBase( dec,  b2);
       return dn;
   }
   
   
    public static int InBase(int n, int b){
       // write code here
       int r=0;
       int p= 1;
       while(n>0)
       {
           int dig = n%b;
           n = n/b;
           r+= dig*p;
           p=p*10;
           
           
       }
return r;   }
   
   
   
    public static int Indecimal(int n, int b){
      // write your code here 
      int r=0;
       int p= 1;
       while(n>0)
       {
           int dig = n%10;
           n = n/10;
           r+= dig*p;
           p=p*b;
           
           
       }
       return r;
   }
  }