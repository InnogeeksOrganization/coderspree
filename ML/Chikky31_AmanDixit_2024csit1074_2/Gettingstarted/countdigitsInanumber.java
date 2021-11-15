import java.util.*;
  
  public class Main{
  
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n,i,c=0;
    n=sc.nextInt();
    while(n>0)
    {
        int k=n%10;
        n=n/10;
        c++;
    }
    System.out.println(c);
   }
  }
