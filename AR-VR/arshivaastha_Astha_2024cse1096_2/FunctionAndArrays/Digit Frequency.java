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
        // write code here
        int a,f=0;
        for(int i=n;i!=0;i=i/10)
        {a=i%10;
          if(a==d)
          f++;
        }
        return(f);
    }
}