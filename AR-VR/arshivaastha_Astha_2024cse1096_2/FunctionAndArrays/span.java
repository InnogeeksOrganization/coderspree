import java.io.*;
import java.util.*;

public class Main{

public static void main(String[] args) throws Exception {
    // write your code here
    Scanner in= new Scanner (System.in);
    int n= in.nextInt();
    int a[] = new int[n];
    for(int i=0;i<n;i++)
    a[i]=in.nextInt();
    
    int min=a[0];
    int max=a[0];
    for(int j=1;j<n;j++)
    {if(max<a[j])
    max=a[j];
    if(min>a[j])
    min=a[j];
    }
    System.out.println(max-min);
 }

}