import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        // write ur code here
    int n=scn.nextInt();
    int a=0,b=1,c=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i==2&&j==2)
            {
                System.out.print("1");
                break;
            }
            System.out.print(c+"\t");
            c=a+b;
            a=b;
            b=c;
        }
        System.out.println();
    }
    
    }
}