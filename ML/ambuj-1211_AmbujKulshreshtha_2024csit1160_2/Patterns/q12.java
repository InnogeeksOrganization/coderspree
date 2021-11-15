import java.util.*;
public class q12 {
    



    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        int n=scn.nextInt();
        int n1=0,n2=1;
        int t;
        for(int i=1;i<=n;i++){
            
            for(int j=1;j<=i;j++){
                System.out.print(n1+"\t");
                t=n1+n2;
                n1=n2;
                n2=t;
            }
            System.out.println();
        }

    }
}

