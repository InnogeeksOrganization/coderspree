 import java.util.*;
  import java.io.*;
  
  public class Main{
  
  public static void main(String[] args){
    
  
  
      Scanner scn = new Scanner(System.in);
      int sum=0,a=0,b=1;
    //   a= scn.nextInt();
    //   b= scn.nextInt();
      System.out.println(a);
        System.out.println(b);
      int n = scn.nextInt();
      for(int i=2;i<n;++i)
      {
          sum=a+b;
            System.out.println(sum);
          a=b;
          b=sum;
      }
   
   }
  }
