import java.util.*;

public class InverseOfANumber {
    public static void main(String[] args) {
        Scanner scn=new Scanner(System.in);
        int n=scn.nextInt();
        int m,f=1;
        int s=0;
        while(n>0){
            m=n%10;
            n=n/10;
            s=(int) (s + (f*Math.pow(10,(m-1))));
            f++;
        }
        System.out.println(s);
    }
}    