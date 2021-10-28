import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        int n=scn.nextInt();
        int space=0;
        for(int i=1;i<=n;i++)
        {
            
            for(int j=0;j<=space-1;j++)
            {
                System.out.print("	");
            }
            System.out.print("*	");
            System.out.println();
            space++;
        }

    }
}