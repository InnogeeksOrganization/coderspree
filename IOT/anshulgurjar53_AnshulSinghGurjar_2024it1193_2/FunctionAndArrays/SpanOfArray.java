import java.io.*;
import java.util.*;

public class Main{

public static void main(String[] args) throws Exception {
    // write your code here
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();int a[]=new int[n];
    
    for(int i=0;i<n;i++)
    {
        a[i]=sc.nextInt();
    }
    int max=a[0],min=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
          max=a[i];
        else if(a[i]<min)
          min=a[i];
    }
    System.out.println(max-min);
 }

}