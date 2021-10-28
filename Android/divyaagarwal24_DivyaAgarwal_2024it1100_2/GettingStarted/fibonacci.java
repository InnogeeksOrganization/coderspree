import java.util.*;
  
  public class fibonacci{
  
  public static void main(String[] args) {
    Scanner scn=new Scanner(System.in);
    int a=0,b=1,c,i,n;
    n=scn.nextInt();

    if(n>1)
    {
    System.out.println(a);
    System.out.println(b);
    n=n-2;
    }
    while(n!=0)
    {
       c=a+b;
       a=b;
       b=c;
       System.out.println(c);
       n--;
    }
    // write your code here
   }
  }
