import java.util.*;

public class pattern3 {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int i,j,n;
        n=scn.nextInt();
        for(i=0;i<n;i++)
        {
            for(j=n;j>(i+1);j--)
            {
                System.out.print("\t");
            }
            for(j=0;j<=i;j++)
            System.out.print("*\t");
            System.out.println();

        }// write ur code here

    }
}
