

public class printZ {

    public static void main(String[] args) {
        int i,j,k,t=3,x;
        for(i=0;i<5;i++)
        {
            System.out.print("*");
        }
        System.out.println();
        for(j=0;j<3;j++)
        {
            for(k=0;k<t;k++)
            {
            System.out.print(" ");
            }
            t--;
            System.out.println("*");
        }
        for(x=0;x<5;x++)
        {
            System.out.print("*");
        }
        // Write your code here

    }
}