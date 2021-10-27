import java.util.*;

public class Main {

    public static void main(String[] args) {
        int i,j;
        for(i=0;i<5;i++)
        {
            System.out.print("*");
        }
            System.out.println();
            for(i=3;i>0;i--)
            {
                for(j=0;j<i;j++)
                System.out.print(" ");
                System.out.println("*");
            }
            for(i=0;i<5;i++)
            {
                System.out.print("*");
            }
        }
    }