import java.util.*;

public class Main {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int c=0,r,rev=0;
    int n = sc.nextInt();
    while(n!=0)
    {
        r = n%10;
        rev = rev*10+r;
        n=n/10;
    }
    while(rev!=0)
    {
        r=rev%10;
        rev=rev/10;
        System.out.println(r);
    }
  }
}