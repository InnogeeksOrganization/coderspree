import java.util.*;

public class Main{

public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);
    int n=scn.nextInt();
    int count=1;
    int space=((n-1)*2);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(j==n)
            break;
                System.out.print(j+"	");
        }
        for(int j=1;j<space;j++)
        {
            
            System.out.print("	");
        }
        for(int j=count;j>=1;j--)
        {
            
            System.out.print(j+"	");
        }
        
        count++;
        space -=2;
        System.out.println();
    }

 }
}