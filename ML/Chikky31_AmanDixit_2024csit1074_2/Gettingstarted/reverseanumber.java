 import java.util.*;
  import java.io.*;
  
  public class Main{
  
  public static void main(String[] args){
    
  
  
      Scanner scn = new Scanner(System.in);
   int n,rev;
   n=scn.nextInt();
   int k=n;
   while(n!=0){
       rev=n%10;
       System.out.println(rev);
       n=n/10;
   }
   
   }
  }
