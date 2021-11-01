import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n=scn.nextInt();
        int gap=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            { 
                if(j<=gap)
                System.out.print("\t");
                else
                System.out.print("*\t");
            }
            System.out.println();
            gap++;
        }
    }
}