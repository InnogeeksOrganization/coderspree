import java.util.*;

public class pattern1 {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n,i,j;
        n=scn.nextInt();
        for(i=0;i<n;i++)
        {
            for(j=0;j<=i;j++)
            {
                System.out.print("*\t");
            }
             System.out.println();
        }

        // write ur code here

    }
}