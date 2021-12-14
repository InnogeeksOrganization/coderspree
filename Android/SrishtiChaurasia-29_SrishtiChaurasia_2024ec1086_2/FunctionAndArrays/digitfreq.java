import java.util.*;

public class Main {

   public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int d = scn.nextInt();
        int f = getDigitFrequency(n, d);
        System.out.println(f);
    }

    public static int getDigitFrequency(int n, int d) {
        int c=0,i;
        while(n>0)
        {
            if(n%10==d)
            c++;
            n=n/10;
        }
        return c;
    }
}