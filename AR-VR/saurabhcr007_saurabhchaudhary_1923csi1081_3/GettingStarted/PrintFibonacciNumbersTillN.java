import java.util.*;

public class PrintFibonacciNumbersTillN {
    public static void main(String[] args) {
        Scanner scn=new Scanner(System.in);
        int n=scn.nextInt();
        int s1=0;
        int s2=1;
        int temp=0;
        System.out.println(s1);
        System.out.println(s2);
        for(int i=2;i<n;i++){
            temp=s1+s2;
            s1=s2;
            s2=temp;
            System.out.println(temp);
        }
    }
}
