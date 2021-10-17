import java.util.*;

public class Main {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int c=0;
    int n = sc.nextInt();
    while(n>0)
    {
        n=n/10;
        c++;
    }
    System.out.println(c);
  } 
}