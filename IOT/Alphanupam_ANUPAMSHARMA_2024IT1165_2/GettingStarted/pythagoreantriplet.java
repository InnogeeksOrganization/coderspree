import java.util.*;
  
  public class Main{
  
  public static void main(String[] args) {
  Scanner scn = new Scanner(System.in);
int n = scn.nextInt();
      int  m = scn.nextInt();
      int l=scn.nextInt();
      if(n>=2&&n<=1000000000&&m>=2&&m<=1000000000&&l>=2&&l<=1000000000)
    {int s=n<m?(n<l?n:l):(m<l?m:l);
    int k=n>m?(n>l?n:l):(m>l?m:l);
    int j=(n>m)?(m>l)?m:l:(n>l)?n:l;
   if(k*k==s*s+j*j)
       System.out.println("true");
    } 
  }
  }