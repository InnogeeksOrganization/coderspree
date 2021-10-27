import java.io.*;
import java.util.*;

public class Main{

public static void main(String[] args) throws Exception {
    // write your code here
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    int a[]=new int[n];int max=a[0];
    for(int i=0;i<n;i++)
    {
        a[i]=sc.nextInt();
        if(a[i]>max)
        max=a[i];
    }
    for(int i=0;i<max;i++)
    {
        
        for(int j=0;j<n;j++)
        {
            if((max-a[j])>i)
            System.out.print("\t");
            else
            System.out.print("*\t");
        }
        System.out.println();
    }
 }

}