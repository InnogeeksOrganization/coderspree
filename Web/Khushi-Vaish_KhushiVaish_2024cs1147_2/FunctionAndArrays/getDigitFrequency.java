import java.util.*;

public Class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int d = scn.nextInt();
        int f = getDigitFrequency(n, d);
        System.out.println(f);
    }

    public static int getDigitFrequency(int n, int d)
    {
      int num,c=0;
      while(n > 0)
      {
        num = n%10;
        n = n/10;
        if(num == d)
        {
            c++;
        }
      }
      return c;
    }
}