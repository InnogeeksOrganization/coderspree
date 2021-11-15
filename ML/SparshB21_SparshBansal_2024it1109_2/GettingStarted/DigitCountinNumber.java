import java.util.Scanner;

public class DigitCountinNumber{
  
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int n = sc.nextInt();
        int a, count=0;

        while(n!=0){
            a=n%10;
           count++;
            n=n/10;
        }
        System.out.println(count);
        sc.close();
     }
    }