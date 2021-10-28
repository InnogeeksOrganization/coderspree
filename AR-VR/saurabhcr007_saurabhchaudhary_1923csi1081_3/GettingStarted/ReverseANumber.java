import java.util.*;

public class ReverseANumber {
    public static void main(String[] args) {
        Scanner scn=new Scanner(System.in);
        int n=scn.nextInt();
        int temp=0;
        while(n!=0){
            temp=n%10;
            n=n/10;
            System.out.println(temp);
        }
    }
}
