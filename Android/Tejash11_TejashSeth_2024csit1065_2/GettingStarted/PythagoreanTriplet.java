import java.util.*;
  
  public class Main{
  
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int a = sc.nextInt();
    int b = sc.nextInt();
    int c = sc.nextInt();
    
    if(c>=a && c>=b)
    {
        System.out.println((c*c)==(b*b + a*a));

    }
    if(a>=b && a>=c)
    {
        System.out.println((a*a)==(b*b + c*c));
    }
    if(b>=a && b>=c)
    {
        System.out.println((b*b)==(c*c + a*a));
    }
  }
  }