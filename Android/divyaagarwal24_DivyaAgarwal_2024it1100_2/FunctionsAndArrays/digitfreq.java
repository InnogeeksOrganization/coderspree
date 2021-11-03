import java.util.*;

public class digitfreq {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int d = scn.nextInt();
        int f = getDigitFrequency(n, d);
        System.out.println(f);
    }

    public static int getDigitFrequency(int n, int d) {
        int r,f=0;
        while(n!=0)
        {
            r=n%10;
            if(r==d)
            f=f+1;
            n=n/10;
        }
        return f;// write code here
    }
}