import java.util.*;

public class IsANumberPrime {
    public static void main(String[] args)  {
        Scanner scn = new Scanner(System.in);
        int t=scn.nextInt();
        int i=1;
        int count=0;
        while(i<=t){
            int n=scn.nextInt();
            if(n==0 || n==1){
                count=count+1;
            }
            else{
                for(int j=2;j<n;j++){
                    if(n%j==0){
                        count=count+1;
                    }
                }
            }
            if(count==0){
                System.out.println("prime");
            }
            else{
                System.out.println("not prime");
            }
            count=0;
            i++;
        }
    }
}
