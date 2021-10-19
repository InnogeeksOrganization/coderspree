import java.util.*;
  
  public class Main{
  
  public static void main(String[] args) {Scanner sc=new Scanner(System.in);
    int n,i,f1=0,f2=1,f;
    n =sc.nextInt();
    System.out.println(f1);
    System.out.println(f2);
    for(i=3;i<=n;i++)
    {   f=f1+f2;
        System.out.println(f);
        
        f1=f2;
        f2=f;
    }
   
   }
  }