import java.util.Scanner;

public class DigitsOfaNumber {
    

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        long v=sc.nextLong();

        String s=Long.toString(v);
        int l=s.length();

        for(int i=l-1;i>=0;i--)
        {
            String p=s.substring(i,i+1);
            System.out.println(Long.parseLong(p));
        }
    }
}
