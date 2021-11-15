import java.util.Scanner;

public class ReverseaNumber{
  
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int n = sc.nextInt();
        int a;

        while(n!=0){
            a=n%10;
          System.out.print(a);
            n=n/10;
        }
        sc.close();
     }
    }