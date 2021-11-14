import java.util.*;

public class InverseNumber{

public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int i = 0;
        int c = 1;
        int d;
        while(n > 0){
            d = n % 10;
            n = n / 10;
            i += c * Math.pow(10, d - 1);
            c++;
            sc.close();
        }
        System.out.println(i);
 }
}