import java.util.*;
  
  public class countdigits{
  
  public static void main(String[] args) {
      Scanner scn=new Scanner(System.in);
    int n,r,count=0;
    n=scn.nextInt();
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        count++;
    }
    System.out.println(count);
    // write your code here  
   }
  }