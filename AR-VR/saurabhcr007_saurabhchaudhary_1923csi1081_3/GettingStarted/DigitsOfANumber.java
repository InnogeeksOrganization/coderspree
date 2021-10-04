import java.util.*;

public class DigitsOfANumber {
    public static void main(String[] args) {
        Scanner scn=new Scanner(System.in);
        long n=scn.nextLong();
        long m=n;
        long count;
        long s=1;
        while(n>=10){
            n=n/10;
            s=s*10;
        }
        while(s>0){
            count=m/s;
            System.out.println(count);
            m=m%s;
            s=s/10;
        }
    }
}