import java.util.*;

public class Main{

public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);
    int n= scn.nextInt();
    int k,m1=0,m2=n-1;
    for(int i=0;i<n;i++)
        System.out.print("*\t");
    System.out.println();
    ++m1;--m2;
    while(m1<=m2)
    
    {
        for(k=0;k<n;k++)
        {
            if(k==m1||k==m2)
                System.out.print("*\t");
            else
                System.out.print("\t");  

        }
        System.out.println();
        ++m1;--m2;
    }
    while(m1<n)
    {
        for(k=0;k<n;k++)
        {
            if(k<=m1&&k>=m2)
                System.out.print("*\t");
            else
                System.out.print("\t");    
        }
        System.out.println();
        ++m1;--m2;
    }    

     // write ur code here

 }
}