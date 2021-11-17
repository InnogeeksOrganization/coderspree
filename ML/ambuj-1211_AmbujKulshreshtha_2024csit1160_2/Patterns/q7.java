import java.util.*;

public class q7 {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        int n=scn.nextInt();
        int i,j;
        for(i=1;i<=n;i++){
            for(j=1;j<=i;j++){
                if(j==i)
                System.out.print("*");
                else
                System.out.print("\t");
            }
            System.out.println();
        }
    }
}