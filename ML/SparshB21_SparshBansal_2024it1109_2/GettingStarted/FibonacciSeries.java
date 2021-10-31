import java.util.Scanner;

public class FibonacciSeries{
  
  public static void main(String[] args) {
    Scanner sc= new Scanner(System.in);
    int n = sc.nextInt();
    int a=0, b=1, i, c;
    System.out.println(a);
    System.out.println(b);

    for(i=0;i<n;i++){
        c=a+b;
        a=b;
        b=c;
        System.out.println(c);
        sc.close();
    }
   }
  }