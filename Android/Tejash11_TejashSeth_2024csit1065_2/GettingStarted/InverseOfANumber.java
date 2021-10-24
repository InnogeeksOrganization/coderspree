import java.util.*;
public class Main
{
    public static void main (String[]args)
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt ();
        
        int inverse = 0;
        int power = 1;
        while(n>0)
        {
            int digit = n%10;
            n = n/10;
            inverse += power * Math.pow (10, digit-1);
            power++;
        }
        System.out.println(inverse);
    }
}